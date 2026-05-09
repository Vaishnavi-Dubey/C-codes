// linked list creation for n elements
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    int i, n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Entered number of elements:%d\n", n);
    ptr = (int *) malloc(n * sizeof(int));
    printf("%d ", sizeof(ptr));
    if (ptr == NULL) { printf("Memory is not available"); }
    else {
        printf("Memory is available using malloc()\n");
        for (i = 0; i < n; i++) {
            ptr[i] = i + 1;
        }
        for (i = 0; i < n; i++) {
            printf("%d", ptr[i]);
        }
    }
}