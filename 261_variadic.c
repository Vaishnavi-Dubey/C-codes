#include <stdarg.h>
#include <stdio.h>

int add(int args, ...) {
    int i = 0, sum = 0;
    va_list ap;
    va_start(ap, args);  //macro representing the start of variadic functions
    for (int i = 0; i < args; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);     //macro representing the end of the variadic function
    return sum;
}

int main() {
    printf("%d", add(2, 3, 3));
}