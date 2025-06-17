//01 addition .c

#include <stdio.h>

int main() {
    int a, b, sum = 0;
    printf("Enter two numbers a and b: \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("sum of a and b is: %d", sum);
    return 0;
}
