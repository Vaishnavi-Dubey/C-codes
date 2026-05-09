#include <iostream>

using namespace std;

// multiple inheritance - single derived class inherit from two or more base class
class A {
protected:
    int a;
};

class B {
protected:
    int b;
};

class C : public A, B {
public:
    C(int a1, int b1) {
        a = a1;
        b = b1;
        cout << a + b;
    }
};

int main() {
    C c1(10, 20);
}