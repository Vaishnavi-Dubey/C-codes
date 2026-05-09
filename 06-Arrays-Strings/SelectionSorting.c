// 12_Selection Sorting.c

//arranged in increasing order
#include <stdio.h>

int main() {
    int a[100];
    int i, j, temp, smallest, n;
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    printf("Enter %d Numbers\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original List: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    for (i = 0; i < (n - 1); i++) {
        smallest = i;
        for (j = i + 1; j < n; j++) {
            if (a[smallest] > a[j]) {
                temp = a[j];
                a[j] = a[smallest];
                a[smallest] = temp;
            }
        }
    }
    printf("\nSorted List:   ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}