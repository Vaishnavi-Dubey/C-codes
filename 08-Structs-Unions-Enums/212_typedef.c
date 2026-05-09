// typedef with structures
#include <stdio.h>

// defining structure
struct str1 {
    int a;
};

// defining new name for str1
typedef struct str1 str1;

// another way of using typedef with structures
typedef struct str2 {
    int x;
} str2;

int main() {
    // creating structure variables using new names
    str1 var1 = {20};
    str2 var2 = {314};

    printf("var1.a = %d\n", var1.a);
    printf("var2.x = %d", var2.x);

    return 0;
}
