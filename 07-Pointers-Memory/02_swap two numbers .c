// 02_swap two numbers .c

// Here, we are using the concept of call by reference (also known as call by address).
//Here, we are using a function to swap the values
// swap() - function has two integer pointer type arguments and within the body we are swapping them.
// Since address of the actual values are passing within the function, swapping will be done with the actual arguments.
#include <stdio.h>

// function : swap two numbers using pointers
void swap(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int num1, num2;

    printf("Enter value of num1: ");
    scanf("%d", &num1);
    printf("Enter value of num2: ");
    scanf("%d", &num2);

    //print values before swapping
    printf("Before Swapping: num1=%d, num2=%d\n", num1, num2);

    //call function by passing addresses of num1 and num2
    swap(&num1, &num2);

    //print values after swapping
    printf("After  Swapping: num1=%d, num2=%d\n", num1, num2);

    return 0;
}
