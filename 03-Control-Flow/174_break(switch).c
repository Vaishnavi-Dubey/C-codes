// break with switch case
#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    float x, y;

    while (1) {
        printf("Enter an operator (+, -), if want to exit "
               "press x: ");
        scanf(" %c", &c);
        // to exit
        if (c == 'x')
            exit(0);

        printf("Enter Two Values:\n ");
        scanf("%f %f", &x, &y);

        switch (c) {
            // For Addition
            case '+':
                printf("%.1f + %.1f = %.1f\n", x, y, x + y);
                break;
                // For Subtraction
            case '-':
                printf("%.1f - %.1f = %.1f\n", x, y, x - y);
                break;
            default:
                printf(
                        "Error! please write a valid operator\n");
        }
    }
}
