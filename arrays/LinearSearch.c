// 13_Linear Search.c

//to search an element from the beginning to the end of the list
#include <stdio.h>

int main() {
    int a[] = {1, 4, 45, 23, 34, 76, 39, 80, 56, 48};
    int i, element;
    printf("Given List: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\nEnter an Element to Search : ");
    scanf("%d", &element);
    for (i = 0; i < 10; i++) {
        if (a[i] == element) {
            printf("%d is present at location %d", element, i + 1);      //because index starts from 0
            return 0;
        }
    }

    printf("%d is not found in a given list", element);

    return 0;
}