//hollow full pyramid pattern using star *
#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++) {

        // first inner loop to print leading white space
        for (int j = 0; j < 2 * i + 1; j++) {
            printf(" ");
        }


        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
            if (k == 0 || k == 2 * (rows - i) - 2 || i == 0)
                printf("* ");
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
