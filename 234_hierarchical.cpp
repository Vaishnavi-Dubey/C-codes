#include <iostream>

using namespace std;

// hierarchical inheritance - multiple derived class from single base class.
class A {
protected:
    int a;
};

class B : public A {
public:
    B() {
        a = 100;
        cout << a << " ";
    }
};

class C : public A {
public:
    C() {
        a = 200;
        cout << a << " ";
    }
};

int main() {
    B b1;
    C c1;
}