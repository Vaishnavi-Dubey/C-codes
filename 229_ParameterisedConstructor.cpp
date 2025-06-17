#include <iostream>

using namespace std;

class A {
    int a, b;
public:
    A() {    //default constructor
        a = 100;
        b = 200;
        cout << a + b << " ";
    }

    A(int a1, int b1) {  //parameterised constructor
        a = a1;
        b = b1;
        cout << a + b << " ";
    }
};

int main() {
    A a1;
    A a2(10, 20);
}