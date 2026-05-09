// 13_Modify value stored in other variable.c

// a pointer contains the address of another variable and by dereferencing the pointer (using asterisk (*) operator),
// we can access the value to that variable and we can also update that value.
//Declare a pointer of same type
//Initialize the pointer with the other (normal variable whose value we have to modify) variable's address
//Update the value
#include <stdio.h>

int main(void) {
    int num = 10;
    //declaring and initializing the pointer
    int *ptr = &num;

    printf("value of num: %d\n", num);
    printf("value of num: (using pointer): %d\n", *ptr);

    //updating the value
    *ptr = 20;

    printf("value of num: %d\n", num);
    printf("value of num (using pointer): %d\n", *ptr);

    return 0;
}

