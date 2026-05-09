#include <stdio.h>

void printArray(int *A, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Selection_sort(int *A, int size) {
    int min;
    for (int i = 0; i < size; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (A[j] < A[min]) {
                min = j;
            }

        }
        if (min != i) {
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
}

int main() {
    int arr[] = {10, 55, 65, 5, 15, 25, 35, 20};
    int size = sizeof(arr) / sizeof(int);
    // printf("%d",size);
    printArray(arr, size);
    Selection_sort(arr, size);
    printArray(arr, size);

    return 0;
}