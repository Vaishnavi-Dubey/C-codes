//12 multiplication table.c
#include <stdio.h>

int main() {
    int num;
// Take the number as an input from the user
    printf("Enter the number whose multiplication table is to be printed\n");
    scanf("%d", &num);
    printf("The multiplication table of %d is", num);
    for (int i = 0; i < 10; i++) {
        printf("%d X %d = %d\n", num, i + 1, (i + 1) * num);
    }
    return 0;
}//
// Created by SID on 07-04-2023.
//
