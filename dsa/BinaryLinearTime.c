// Implement Binary search and linear search and determine the time required
//to search an element.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Linear search function
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

// Binary search function
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid; // Return the index if target is found
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 50; // Element to search for
// Measure time for linear search
    clock_t start_linear = clock();
    int linearResult = linearSearch(arr, n, target);
    clock_t end_linear = clock();
    if (linearResult != -1)
        printf("Linear Search: Element found at index %d\n",
               linearResult);
    else
        printf("Linear Search: Element not found\n");
    printf("Time taken for Linear Search: %f seconds\n",
           ((double) (end_linear - start_linear)) / CLOCKS_PER_SEC);
// Measure time for binary search (requires a sorted array)
// Sort the array before performing binary search
// Here, we're assuming the array is already sorted
    clock_t start_binary = clock();
    int binaryResult = binarySearch(arr, n, target);
    clock_t end_binary = clock();
    if (binaryResult != -1)
        printf("\nBinary Search: Element found at index %d\n",
               binaryResult);
    else
        printf("\nBinary Search: Element not found\n");
    printf("Time taken for Binary Search: %f seconds\n",
           ((double) (end_binary - start_binary)) / CLOCKS_PER_SEC);
    return 0;
}
