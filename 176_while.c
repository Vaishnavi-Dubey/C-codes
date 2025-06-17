#include<stdio.h>

int main() {
    int no = 1, sum = 0;

    while (no <= 5) {
        sum = sum + no;
        no++;
    }

    printf("SUM = %d", sum);

    return 0;
}
