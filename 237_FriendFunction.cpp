#include <iostream>

using namespace std;

class A {
    int a;
public:
    A() { a = 100; }

    friend void display();
};

void display() {
    A a1;
    cout << a1.a;
}

int main() { display(); }
