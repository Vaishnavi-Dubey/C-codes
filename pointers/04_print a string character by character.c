// 04_print a string character by character.c

//Here, we have two variables, str is a string variable and ptr is a character pointer,
// that will point to the string variable str.
// we are reading string in str and then assigning the base address of str to the character pointer ptr by using ptr=str
// or it can also be done by using ptr = &str[0].
// finally printing the string character by character until NULL not found. Characters are printing by the pointer *ptr.
#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    gets(str);

    //assign address of str to ptr
    ptr = str;

    printf("Entered string is: ");
    while (*ptr != '\0')
        printf("%c", *ptr++);

    return 0;
}

