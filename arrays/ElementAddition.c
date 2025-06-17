// c program to add the elements in a single array and show the sum as output.
//02 addition of array elements .c
#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        sum = sum + arr[i];
    }
    printf("sum of all the elements in a single array is %d", sum);
    return 0;
}
