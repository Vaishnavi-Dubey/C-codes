#include <stdio.h>

int main() {

    // code
    int a[2][3] = {{1, 3, 2},
                   {6, 7, 8}};
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n a[%d][%d]=%d", i, j, a[i][j]);
        }
    }
    return 0;
}
