// 06_Sum of Cubes of Array Elements.c

#include <stdio.h>

int main() {
    int sum = 0, i, n;
    //variable declaration. i= loop variable.
    int num[100];
    //num[100] is an array of max size 100
    printf("Enter the size of an array\n");
    //enter the size of the array
    scanf("%d", &n);
    //store that value in the variable n
    printf("Enter total %d elements\n", n);
    // enter the ‘n’ number of elements.
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        // reading and storing an element into the array
        sum = sum + num[i] * num[i] * num[i];
        // addition of cubes of elements
    }
    printf("Sum = %d", sum);
    return 0;
}
