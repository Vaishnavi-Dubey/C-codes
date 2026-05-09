//  Out of Bound access in arrays
#include <stdio.h>

int main() {

    // creating new array with 3 elements
    int arr[3] = {1, 2, 3};

    // trying to access out of bound element
    printf("Some Garbage Value: %d", arr[5]);

    return 0;
}
