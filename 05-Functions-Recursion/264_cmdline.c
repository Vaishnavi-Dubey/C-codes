#include <stdio.h>

int main(int args, char *argv[]) {
    int i = 0;
    printf("%d", args);
    while (i < args) {
        printf("%s", argv[i]);
        i++;
    }
}