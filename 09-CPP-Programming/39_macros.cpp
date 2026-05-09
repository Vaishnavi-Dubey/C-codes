// Macros
#include <iostream>

using namespace std;

#define var 5

int main() {
    printf("%d ", var);

#ifdef var
#undef var

    // redefine var as 10
#define var 10
#endif

    printf("%d", var);
    return 0;
}
