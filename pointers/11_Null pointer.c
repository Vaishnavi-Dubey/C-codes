// 11_Null pointer.c

//The word "NULL" is a constant in C language and its value is 0.
//  if any pointer does not contain a valid memory address or any pointer is uninitialized, known as "NULL pointer".
// We can also assign 0 (or NULL) to make a pointer as "NULL pointer".
//In this example, there are 3 integer pointers ptr1, ptr2 and ptr3.
// ptr1 is initialized with the address of the integer variable num, thus ptr1 contains a valid memory address.
// ptr2 is uninitialized and ptr3 assigned 0.
// Thus, ptr2 and ptr3 are the NULL pointers.
#include <stdio.h>

int main(void) {
    int num = 10;

    int *ptr1 = &num;
    int *ptr2;
    int *ptr3 = 0;

    if (ptr1 == 0)
        printf("ptr1: NULL\n");
    else
        printf("ptr1: NOT NULL\n");

    if (ptr2 == 0)
        printf("ptr2: NULL\n");
    else
        printf("ptr2: NOT NULL\n");

    if (ptr3 == 0)
        printf("ptr3: NULL\n");
    else
        printf("ptr3: NOT NULL\n");

    return 0;
}

