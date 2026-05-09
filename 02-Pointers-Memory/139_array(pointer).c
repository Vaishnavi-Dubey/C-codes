// Relationship Between Array and Pointers
#include <stdio.h>

int main() {

    // creating an array with 3 elements
    int arr[3] = {1, 2, 3};

    int *ptr = &arr[0];

    // Pointer to first element
    printf("Pointer to First Element: %p\n", ptr);

    // Array name as pointer
    printf("Arran Name: %p", arr);

    return 0;
}
