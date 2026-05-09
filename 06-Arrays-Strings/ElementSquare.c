// 07_Square of Elements of an Array.c

#include <stdio.h>

int main() {
    int sum = 0, i, n;
    int num[100], snum[100];
    // declared two arrays.
    // One is num[] which contains original array elements
    // the other array variable is snum[] which contains square of array elements.
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    printf("Enter total %d elements\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        snum[i] = num[i] * num[i];
        //storing squares of inputs in snum
    }
    printf("Original Array Elements : ");
    for (i = 0; i < n; i++) {
        printf("%d", num[i]);
    }
    printf("\nSquare of Array Elements : ");
    for (i = 0; i < n; i++) {
        printf("%d", snum[i]);
    }
    return 0;
}