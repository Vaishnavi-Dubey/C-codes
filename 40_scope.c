#include <stdio.h>

int main() {
    int var = 34; // Scope of this variable is within main() function only. Therefore, called LOCAL to main() function.

    printf("%d", var);

    return 0;
}
