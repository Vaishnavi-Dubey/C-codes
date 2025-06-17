// auto keyword
#include <stdio.h>

int printvalue() {
    auto int a = 10;
    printf("%d", a);
}

int main() {
    printvalue();
    return 0;
}
/*auto is the default storage class variable that is declared inside a function or a block.
 * auto variables can only be accessed within the function/block they are declared.
 * By default, auto variables have garbage values assigned to them.
 * Automatic variables are also called local variables as they are local to a function.
 * used to declare a local variable */