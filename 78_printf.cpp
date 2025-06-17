//  printf()

#include <stdio.h>

int main() {
    long int n = 123456789;

    printf("While printing ");
    printf(", the value returned by printf() is : %d",
           printf("%ld", n));

    return 0;
}
