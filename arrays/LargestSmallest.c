// 10_ largest and smallest number in an unsorted array.c

#include <stdio.h>

int main() {
    int small, large, i, n, a[100];
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    printf("Enter %d Numbers\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    small = a[0];
    large = a[0];
    for (i = 1; i < n; i++) {
        if (large < a[i])
            large = a[i];
        if (small > a[i])
            small = a[i];
    }
    printf("Original Array Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nSmallest Number = %d\n", small);
    printf("Largest Number = %d\n", large);
    return 0;
}//
// Created by SID on 07-04-2023.
//
