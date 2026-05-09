// infinite loop without using break statement
#include <stdio.h>

int main() {

    int i = 0;

    // while loop which will always be true
    while (1) {
        printf("%d ", i);
        i++;
        if (i == 5) {
            break;
        }
    }
    return 0;
}
