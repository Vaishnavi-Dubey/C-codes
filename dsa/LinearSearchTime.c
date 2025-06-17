//Perform linear search and find the time required to search an element.
#include <stdio.h>
#include <time.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element if found
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22; // Element to search for
// Measure time for linear search
    clock_t start_linear_search = clock();
    int index = linearSearch(arr, n, target);
    clock_t end_linear_search = clock();
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    printf("Time taken for Linear Search: %f seconds\n",
           ((double) (end_linear_search - start_linear_search)) /
           CLOCKS_PER_SEC);
    return 0;
}

