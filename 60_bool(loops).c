//  Using bool in loops
#include <stdbool.h>
#include <stdio.h>

int main() {
    // boolean declared
    bool a = true;
    int i = 0;

    // while loop
    while (a) {
        printf("i is %d\n", i);
        i++;

        // Conditional statement returning
        // true or false
        // Breaking point for loop
        if (i > 5) {
            a = false;
        }
    }

    return 0;
}
