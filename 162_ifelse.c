// even or odd
#include <stdio.h>

int main() {

    // Some random number
    int num = 9911234;

    // checking the condition at the start of if block
    if (num % 2 == 0) {
        // executed when the number is even
        printf("Number is even");
    }
        // else block
    else {
        // executed when the number is odd
        printf("Number is Odd");
    }

    return 0;
}
