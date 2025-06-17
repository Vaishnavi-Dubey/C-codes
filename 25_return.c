// return keyword
#include <stdio.h>

int sum(int x, int y) {
    int sum;
    sum = x + y;
    return sum;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    printf("Sum: %d",
           sum(num1, num2));
    return 0;
}
