


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FisherYates(int* player, int n)
{
    int i, j, tmp; // create local variables to hold values for shuffle
    srand(time(NULL));
    for (i = n - 1; i > 0; i--) { // for loop to shuffle
        j = rand() % (i + 1); //randomise j for shuffle with Fisher Yates
        tmp = player[j];
        player[j] = player[i];
        player[i] = tmp;
    }
}

char* randomString(int length)
{
    //97-122
    char* string = (char*)malloc(length + 1);
    int asciinums[28];
    
    for (int i = 0; i < 26; i++)
    {
        asciinums[i] = i + 97;
    }

    
    for (int i = 0; i < length; i++)
    {
        string[i] = asciinums[rand() % 26];
    }
    
    string[length] = '\0';
    return string;
    

}

void createFile(const char *filePath, char *fileName)
{
    FILE* file;
    char fullFile[100] = "";
    strcat(fullFile, filePath);
    strcat(fullFile, fileName);
    
    file = fopen(fullFile, "w");
    if (file == NULL)
    {
        printf("failed to create files");
    }
    char* resultat = randomString(1000);
    fprintf(file, resultat);
    free(resultat);
    fclose(file);
}

int main(int argc, char* argv[])
{
       
    const char* path = "";
    int length = 12;
    int numFiles = 4;
    srand(time(NULL));

    for (int i = 0; i < numFiles; i++)
    {
        size_t fileNameExtSize = length + strlen(".txt") + 1;
        char* fileNameExt = (char*)malloc(fileNameExtSize);
        char* _randomString = randomString(length);
        strcpy(fileNameExt, _randomString);
        strcat(fileNameExt, ".txt");
        createFile(path, fileNameExt);
        free(_randomString);
        free(fileNameExt);
    }


}