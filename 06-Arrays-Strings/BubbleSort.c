// 11_Bubble Sort .c

//arranged in descending order
#include <stdio.h>

int main() {
    int a[100];
    int i, j, temp, n;
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    printf("Enter %d Numbers\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original List: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < (n - 1) - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nSorted List:   ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}