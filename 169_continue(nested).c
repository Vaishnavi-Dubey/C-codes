// continue statement with nested loops
#include <stdio.h>

int main() {

    // outer loop with 3 iterations
    for (int i = 1; i <= 3; i++) {
        // inner loop to print integer 1 to 4
        for (int j = 0; j <= 4; j++) {

            // continue to skip printing number 3
            if (j == 3) {
                continue;
            }
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
