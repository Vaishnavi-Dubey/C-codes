//.Sort a given set of elements using bubble and selection sort and hence find the time required to sort elements
#include <stdio.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
// Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
// Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
// Measure time for bubble sort
    clock_t start_bubble = clock();
    bubbleSort(arr, n);
    clock_t end_bubble = clock();
    printf("Sorted array using Bubble Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTime taken for Bubble Sort: %f seconds\n",
           ((double) (end_bubble - start_bubble)) / CLOCKS_PER_SEC);
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
// Measure time for selection sort
    clock_t start_selection = clock();
    selectionSort(arr2, n);
    clock_t end_selection = clock();
    printf("\nSorted array using Selection Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\nTime taken for Selection Sort: %f seconds\n",
           ((double) (end_selection - start_selection)) / CLOCKS_PER_SEC);
    return 0;
}