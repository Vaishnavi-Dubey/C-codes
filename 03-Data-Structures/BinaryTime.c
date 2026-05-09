//Search a elements using the Binary search method and determine the time
//required to search the element0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
// Measure time for binary search (requires a sorted array)
// Sort the array before performing binary search
// Here, we're assuming the array is already sorted
    clock_t start_binary = clock();
    int binaryResult = binarySearch(arr, n, target);
    clock_t end_binary = clock();
    if (binaryResult != -1)
        printf("Binary Search: Element found at index %d\n",
               binaryResult);
    else
        printf("Binary Search: Element not found\n");
    printf("Time taken for Binary Search: %f seconds\n",
           ((double) (end_binary - start_binary)) / CLOCKS_PER_SEC);
    return 0;
}