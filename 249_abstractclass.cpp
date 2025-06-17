// We can not create an object of abstract class, however we can create a pointer.
#include <iostream>

using namespace std;

class A {
public:
    virtual void abc1() = 0;
};

class B : public A {
public:
    void abc1() { cout << "function of class B\n"; }
};

int main() {
    // A a1;  //error
    A *ptr;  //no error
    B b1;
}