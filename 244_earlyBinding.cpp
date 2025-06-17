// Accessing class members using pointers
#include <iostream>

using namespace std;

class abc {
    int a, b;
public:
    abc() {
        a = 100;
        b = 200;
    }

    void sum() {
        cout << a + b << "\n";
    }
};

int main() {
    abc *ptr;
    abc a1;
    ptr = &a1;
    ptr->sum();
}