//02_pointers.c
#include <stdio.h>

int main() {
    int v[3] = {10, 100, 200};
    int *ptr;
    ptr = v;
    for (int i = 0; i < 3; i++) {
        printf("%d\n", *ptr);
        printf("%p", ptr);
    }
    return 0;
}
