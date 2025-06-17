// 14_Binary Search.c

//divide the array list into two until we get our element.
#include <stdio.h>

int main() {
    int a[] = {2, 4, 5, 8, 19, 31, 34, 56, 78, 81, 89};//Sort the array in ascending order.
    int element, beg, end, mid, i;
    printf("Given List: ");
    for (i = 0; i <= 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\nEnter an element to search: ");
    scanf("%d", &element);
    beg = 0;
//Set two pointers beg and end at the lowest and the highest positions respectively.
    end = 10;

    mid = (int) ((beg + end) / 2);
    // Find the middle element mid of the array {arr[(low + high)/2]}
    while ((a[mid] != element) && (beg <= end)) {
        if (element < a[mid])
            //If x<mid, compare x with the middle element of the elements on the left side of mid
        {
            end = mid - 1;
            //This is done by setting end to end = mid - 1
        } else
            //Else, compare x with the middle element of the elements on the right side of mid
        {
            beg = mid + 1;
            //This is done by setting beg to beg = mid + 1.
        }
        mid = (int) ((beg + end) / 2);
        //Repeat until beg meets end.
    }
    if (a[mid] == element)
        // If found at mid, then return it
    {
        printf("Location of %d is %d", element, mid + 1);
    } else {
        printf("%d is not present in given list", element);
    }
    return 0;
}