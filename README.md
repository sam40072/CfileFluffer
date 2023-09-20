# CfileFluffer
Program intended to create a lot of fake files on a USB in order to protect real files from being found

# About this project
I am currently learning C through a course at my university. As I learn more about C I will add more and more to the project and improve it in every way. So far, I needed a lot of help with some issues that I've encountered, and my memory usage skills are definetly not very good as we haven't gone over that in the class yet. My idea was making it difficult for programs to quickly look through, and find the original file in the mess of all the fake ones.
Currently, you have to compile the code yourself in order to change the path of where the files should be created and the number of them.

# future ideas
Right now this program is pretty useless, because any script will be able to distinguish the gibberish in the fake files from real data very easily in quickly.

To prevent this, in the future I hope to regulate the size of the fake files to make them match the original so its harder to find.

I will also edit the original file with white spaces so that its not visable when a folder is sorted by "Date modified".

I might use some sort of encryption on all the files encluding original so that all the files contents looks the same (the attacker can't tell apart real encrypted data, and fake encrypted data)

I will also add costum file extentions so files besides txt can be protected (for exes I'll have to encrypt them so they can't be found by running them, and I'll have to find an algorithm to generate valid pictures, or encrypt the original)

