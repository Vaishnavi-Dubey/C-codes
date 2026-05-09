// + operator overloading
#include <iostream>

using namespace std;

class abc {
    int a, b;
public:
    abc() {
        a = 0;
        b = 0;
    }

    void get() { cin >> a >> b; }

    void dis() { cout << a << " " << b; }

    //when you are overloading a unary operator, arg-list will be empty.
    // when you are overloading a binary operator, arg-list will contain one parameter.
    abc operator+(abc a5) { //a5 is reference of object a2 in main
        abc temp;
        temp.a = a + a5.a;
        temp.b = b + a5.b;
        return temp; //get copied to object in a4 in main.
    }
};

main() {
    abc a1, a2, a4;
    a1.get();
    a2.get();
    a4 = a1 + a2; //this operand on the right of + is passed in the parameter
    //a1 is calling object
    a4.dis();
}