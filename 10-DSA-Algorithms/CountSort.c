//Write a program to perform Count sort.
#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void countSort(int arr[], int size) {
// Find the maximum element to determine the range
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
// Create a count array to store the count of each element
    int count[max + 1];
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }
// Count the occurrences of each element
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }
// Update the count array to store the cumulative count
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }
// Create a temporary array to store the sorted elements
    int output[size];
    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
// Copy the sorted elements back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

// Driver program to test the above functions
int main() {
    int arr[] = {4, 2, 3, 4, 1, 2, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, size);
    countSort(arr, size);
    printf("Sorted array: ");
    printArray(arr, size);
    return 0;
}