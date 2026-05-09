// diamond pattern using numbers
#include <stdio.h>
int main()
{
    int rows = 5;

    // first outer loop to iterate through each row
    for (int i = 0; i < 2 * rows - 1; i++) {

        int comp;
        if (i < rows) {
            comp = 2 * (rows - i) - 1;
        }
        else {
            comp = 2 * (i - rows + 1) + 1;
        }

        for (int j = 0; j < comp; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * rows - comp; k++) {
            printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}
