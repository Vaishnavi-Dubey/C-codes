#include <stdio.h>
#include <stdarg.h>

double add(int args, ...) {
    int i = 0;
    double sum = 0;
    va_list ap;
    va_start(ap, args);
    for (int i = 0; i < args; i++) {
        sum += va_arg(ap, double);
    }
    va_end(ap);
    return sum;
}

int main() {
    printf("%lf", add(2, 33.45, 35.90));
}