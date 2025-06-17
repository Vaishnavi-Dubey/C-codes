// 03_Sum of Odd Numbers in an Array.c

#include <stdio.h>

int main() {
    int sum = 0, i, n;                                  //initialising sum with 0. i = loop variable. n = size of array
    int num[100];                                      // array variable name with [max_size]
    printf("Enter the size of an array\n");
    scanf("%d", &n);                               //storing value at the address of n
    printf("Enter total %d elements\n", n);       //entering n number of elements
    for (i = 0; i < n; i++)//Iterate through all elements
    {
        scanf("%d", &num[i]);
        if ((num[i] % 2) == 1)                      // checking whether num[i] is odd or not through modulo operator (%)
            // which gives us remainder after division. (here, 1)
        {
            sum = sum + num[i];                        //add the sum of odd numbers and store the value in sum variable
        }
    }
    printf("Sum = %d", sum);                      // print the sum
    return 0;
}