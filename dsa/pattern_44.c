// Floyd's Triangle of Alphabets
#include <stdio.h>

int main()
{
    int rows = 4;
    char n = 'A';

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j <= i; j++) {
            printf("%c ", n++);
        }
        printf("\n");
    }
    return 0;
}
