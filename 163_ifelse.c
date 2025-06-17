// check whether the person is eligible to vote or not
#include <stdio.h>

int main() {

    // declaring age of two person
    int p1_age = 15;
    int p2_age = 25;

    // checking eligibility of person 1
    if (p1_age < 18)
        printf("Person 1 is not eligible to vote.\n");
    else
        printf("Person 1 is eligible to vote.\n");

    // checking eligiblity of person 2
    if (p2_age < 18)
        printf("Person 2 is not eligible to vote.\n");
    else
        printf("Person 2 is eligible to vote.");

    return 0;
}
