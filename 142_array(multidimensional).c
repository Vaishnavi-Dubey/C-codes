#include<stdio.h>

int main() {
    int a[][2] = {{1, 2},
                  {3, 4}}; // Works
    printf("%lu", sizeof(a)); // prints 4*sizeof(int)
    getchar();
    return 0;
}
