#include <iostream>

using namespace std;

class A {
public:
    int a;

    void get() { a = 100; }
};

void display(A a2) {
    cout << a2.a;
}

int main() {
    A a1;
    a1.get();
    display(a1);  //message passing is passing objects is parameters (to a method)
}