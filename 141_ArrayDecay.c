// Array Decay
#include <stdio.h>

// function
void func(int *arr) {
    printf("Sizeof Value in Function: %d", sizeof(arr));
}

int main() {

    // creating array with 3 elements
    char arr[3];

    printf("Sizeof Value in Main: %d\n", sizeof(arr));

    // passing array
    func(arr);

    return 0;
}
