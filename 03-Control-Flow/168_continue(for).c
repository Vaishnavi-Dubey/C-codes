// continue statement with for loop

#include <stdio.h>

int main() {
    // for loop to print 1 to 8
    for (int i = 1; i <= 8; i++) {
        // when i = 4, the iteration will be skipped and for will not be printed
        if (i == 4) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    int i = 0;
    // while loop to print 1 to 8
    while (i < 8) {
        // when i = 4, the iteration will be skipped and for will not be printed
        i++;
        if (i == 4) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
