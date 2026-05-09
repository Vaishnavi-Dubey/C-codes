#include <iostream>

using namespace std;

// multi level inheritance - derived class from a class, which in turn inherits from another class.
class A {
protected:
    int a;
};

class B : public B {
protected:
    int b;
};

class C : public B {
public:
    C(int a1, int b1) {
        a = a1;
        b = b1;
        cout << a + b;

    };

    int main() {
        C c1(10, 20);
    }