// 09_ largest number in an unsorted array.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100], n;                    //read an array of size n
    int i, large;
    printf("Enter size of an array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    large = a[0];
    for (i = 1; i < n; i++) {
        if (large < a[i]) {
            large = a[i];
        }

    }
    printf("Original Array Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nLargest Element = %d", large);
    return 0;
}
//
// Created by SID on 07-04-2023.
//
