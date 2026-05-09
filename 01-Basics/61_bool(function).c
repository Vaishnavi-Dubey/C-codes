// bool as a function return type
#include <stdbool.h>
#include <stdio.h>

// function returning boolean value
bool is_even(int num) {
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // Integer value declared
    int num = 5;

    // Function calling
    if (is_even(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
