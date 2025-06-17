//04_pointers.c
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;
    int **ptr2;
    ptr = &x;
    ptr2 = &ptr;
    printf("%d\n", x);
    printf("%d\n", *ptr);
    printf("%d\n", **ptr2);
    return 0;
}
