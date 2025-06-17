// Sort a given set of elements using the insertion Sort algorithm to sort a
//given set of elements and determine the time required to sort the elements.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
// Measure time for insertion sort
    clock_t start_insertion = clock();
    insertionSort(arr, n);
    clock_t end_insertion = clock();
    printf("Sorted array using Insertion Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTime taken for Insertion Sort: %f seconds\n",
           ((double)(end_insertion - start_insertion)) / CLOCKS_PER_SEC);
    return 0;
}