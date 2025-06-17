// Without virtual in previous program-late binding can not be achieved
#include <iostream>

using namespace std;

class A {
public:
    void fun() { cout << "in class A\n"; }
};

class B : public A {
public:
    void fun() { cout << "in class B\n"; }
};

int main() {
    A *ptr;
    A a1;
    B b1;

    ptr = &a1;
    ptr->fun();
    ptr = &b1;
    ptr->fun();
}
