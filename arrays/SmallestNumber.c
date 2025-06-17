// 08_smallest number in an unsorted array.c

#include <stdio.h>

int main() {
    int a[100], n;                                //read an array of size n.
    int i, small;
    printf("Enter size of an array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);     //enter n elements
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    small = a[0];
    for (i = 1; i < n; i++) {
        if (small > a[i]) {
            small = a[i];
        }

    }
    printf("Original Array Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nSmallest Element = %d", small);
    return 0;
}