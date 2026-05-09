#include <stdio.h>

int main(void) {
    char value1 = 'a';
    char value2 = 'b';
    char value3 = 'z';
    // perform character arithmetic
    char num1 = value1 + 3;
    char num2 = value2 - 1;
    char num3 = value3 + 2;
    // print value
    printf("numerical value=%d\n", num1);
    printf("numerical value=%d\n", num2);
    printf("numerical value=%d\n", num3);
    return 0;
}
