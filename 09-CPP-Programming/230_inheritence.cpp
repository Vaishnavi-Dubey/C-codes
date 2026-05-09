#include <iostream>

using namespace std;

class A {
protected:
    int a;
};

class B : public A {
public:
    void print() {
        a = 100;
        cout << a
    }
};

int main() {
    B b1;
    b1.print();
}