// accessing class members using pointers
#include<iostream>

using namespace std;

class abc {
    int a, b;
public:
    abc() {
        a = 100;
        b = 200;
    }

    void out() { cout << a << " " << b; }
};

int main() {
    abc a1;
    abc *ptr = &a1
    ptr->out();
}