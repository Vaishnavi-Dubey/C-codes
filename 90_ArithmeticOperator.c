// area and perimeter of the rectangle
#include <stdio.h>

int main() {
    // declaring dimensions of the rectangle
    int length = 10;
    int breadth = 5;

    // declaring variables to store the results
    int area, perimeter;

    // calculating area
    area = length * breadth;

    // calculating perimeter
    perimeter = 2 * (length + breadth);

    // printing results
    printf("Area = %d\nPerimeter = %d", area, perimeter);

    return 0;
}
