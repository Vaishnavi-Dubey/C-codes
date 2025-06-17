// 12_valid pointer as NULL pointer.c

//Any pointer that contains a valid memory address can be made as a NULL pointer by assigning 0.
//Here, firstly ptr is initialized by the address of num, so it is not a NULL pointer,
// after that, we are assigning 0 to the ptr, and then it will become a NULL pointer.
#include <stdio.h>

int main(void) {
    int num = 10;
    int *ptr = &num;

    //we can also check with 0 instesd of NULL
    if (ptr == NULL)
        printf("ptr: NULL\n");
    else
        printf("ptr: NOT NULL\n");

    //assigning 0
    ptr = 0;
    if (ptr == NULL)
        printf("ptr: NULL\n");
    else
        printf("ptr: NOT NULL\n");

    return 0;
}

