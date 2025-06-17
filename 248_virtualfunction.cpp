// it is not necessary for the derived class to override the virtual function in base class
#include <iostream>

using namespace std;

class A {
public:
    virtual void abc1() { cout << "function of class A\n"; }
};

class B : public A {
public:
    void abc() { cout << "function of class B\n"; }
};

class C : public B {
};

int main() {
    A a1;
    B b1;
    C c1;
    A *ptr;
    ptr = &a1;
    ptr->abc1();
    ptr = &b1;
    ptr->abc1();
}