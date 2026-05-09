// 05_Sum of Even and Odd Numbers Separately in an Array.c

#include <stdio.h>

int main() {
    int sume = 0, sumo = 0, i, n;                        //initialising sum with 0. i = loop variable. n = size of array
    // (sume=sum_even, sumo=sum_odd)
    int num[100];                                       //[max_size]
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    printf("Enter total %d elements\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        if ((num[i] % 2) == 0)                    //  checking whether num[i] is odd or not through modulo operator (%)
        {
            sume = sume + num[i];                // sum of even numbers
        } else {
            sumo = sumo + num[i];               // sum of odd numbers
        }
    }
    printf("Sum of Even Numbers  = %d\n", sume);
    printf("Sum of Odd Numbers  = %d\n", sumo);
    return 0;
}