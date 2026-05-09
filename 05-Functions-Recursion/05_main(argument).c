#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("The value of argc is %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s \n", argv[i]);
    }

    return 0;
}
//These arguments are called command line arguments and these are given at the time of executing a program.
// The first argument argc means argument count which means it stores the number of arguments passed in the command line
// and by default, its value is 1 when no argument is passed.
// The second argument is a char pointer array argv[] which stores all the command line arguments passed.
// We can also see in the output when we run the program without passing any command line argument the value of argc is 1.