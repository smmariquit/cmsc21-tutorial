#include <stdio.h>
#include <stdlib.h>

// argv is an array of character pointers
int main(int argc, char* argv[]){ // kaya int main kasi int ang return value
    // ./1 2 5
    // 1 is the name of the program, any program
    // 2 and 5 are the command line parameters
    // argc is the count of parameters
    // what's the value of argc given this command? 
    // not 7 because hindi naman necessarily mag-aadd
    // argc here becomes 2

    // under the hood, bibilangin muna ng program kung ilang parameters
    // "./1 2 5" -> it sees 2 parameters
    // int argc = 3
    // int[argc] argv = [1, 2, 5]
    // then, it calls main(argc, argv)
    printf("program name: %s\n", argv[0]);
    printf("argument 1: %s\n", argv[1]);
    printf("argument 2: %s\n", argv[2]);
    printf("argument count: %d\n", argc);
}