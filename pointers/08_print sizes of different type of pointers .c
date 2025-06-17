// 08_print sizes of different type of pointers .c

/*C program to print size of different types of pointer variables.*/
//Any type of pointer variable takes the same memory bytes in the memory,
// because they are used to store the memory addresses on other type of variables.
#include <stdio.h>

int main() {
    printf("\nsize of char pointer: %d", sizeof(char *));
    printf("\nsize of int pointer: %d", sizeof(int *));
    printf("\nsize of float pointer: %d", sizeof(float *));
    printf("\nsize of long int pointer: %d", sizeof(long int *));
    printf("\nsize of double pointer: %d\n", sizeof(double *));
    return 0;
}
