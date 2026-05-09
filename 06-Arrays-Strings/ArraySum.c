// 02_sum of an array.c

#include <stdio.h>

int main() {
    int sum = 0, i, n;
    //initialised sum with 0. i = loop variable. n = size of array.
    int num[100];
    // [max_size]
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    //storing the value at the address of n
    printf("Enter total %d elements\n", n);
    for (i = 0; i < n; i++)
        //Iterate through all elements
        scanf("%d", &num[i]);
    //storing the value at the address of array variable num[i]
    for (i = 0; i < n; i++)
        //iterate again
        sum = sum + num[i];
    //add them to sum

    printf("Sum = %d", sum);
    //print the sum
    return 0;
}