// experiment 1... bubble sort
#include <stdio.h>

void printArray(int *A, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", A[i]);
    }
    printf("\n");
}

void bubblesort(int *A, int size) {
    int sorted = 1;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            int temp;
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                sorted = 0;
            }
        }
        if (sorted)
            return;
    }
}

int main() {
    int n;
    int arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before sorted: ");
    printArray(arr, n);
    bubblesort(arr, n);
    printf("Array after sorted: ");
    printArray(arr, n);
    return 0;
}