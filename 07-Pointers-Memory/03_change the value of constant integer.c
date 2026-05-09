// 03_change the value of constant integer.c

#include <stdio.h>

int main() {
    const int a = 10;     //declare and assign constant integer
    int *p;             //declare integer pointer
    p = &a;               //assign address into pointer p

    printf("Before changing - value of a: %d", a);

    //assign value using pointer
    *p = 20;

    printf("\nAfter  changing - value of a: %d", a);
    printf("\nWauuuu... value has changed.");

    return 0;
}
