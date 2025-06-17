// 01_size of an array.c
#include <stdio.h>

int main() {
    int int_arrays[100];
    float float_arrays[10];
    char char_arrays[100];
    printf("Size of the Intger Arrays = %d bytes", sizeof(int_arrays));
    printf("\nSize of the Real Arrays = %d bytes", sizeof(float_arrays));
    printf("\nSize of the Character Arrays = %d bytes", sizeof(char_arrays));
    return 0;
}
//sizeof() operator returns the size of any data-type
//size means total bytes of memory allocated to a particular data-type.