// Inaccessible base class function
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
    B b1;
    b1.fun;
    b1.fun();
}
//fun() function define in class A become inaccessible with the object of child class that is B in this case