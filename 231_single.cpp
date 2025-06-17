#include <iostream>

using namespace std;

// single inheritance - one derived class inherits from one base class
class A {
protected:
    int a;
};

class B : public A {
public:
    void print() {
        a = 100;
        cout << a;
    }
};

int main() {
    B b1;
    b1.print();
}