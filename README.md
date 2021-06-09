# Simple-Compiler-using-FLex-Bison

This is a simple compiler that can parse C-like code with a little modification in code format. It was part of my **3rd year 2nd-semester** compiler project. I have used **Flex and Bison** to build this compiler using a C programming language. This compiler can not ensure proper handling of *if-else, loop, or switch case* conditions due to Bison limitations. However, It is good enough for a small demonstration of how a compiler works.

Flex and bison are pre-requisite for this project to run into any PC. So install them first and add path variabale properly. 

To run this code do the following steps:
1. Download this repository as zip to your desired folder.
2. Open the folder and unzip it.
3. Go to unzip folder.
4. Open Command promt from there.
5. Run the following commands:
    1. ```bison -d pf.y```
    2. ```flex pf.l```
    3. ```gcc lex.yy.c pf.tab.c -o desired_file_name```
    4. ```desired_file_name```

The output should be printed on the screen.
By changing the input in the ```test.txt``` file according to the documentation from the ```report.pdf``` file anyone can test it with their own inputs.

