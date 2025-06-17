//this pointer store the address of calling object.
#include <iostream>

using namespace std;

class abc {
public:
    abc() {
        cout << this << "\n";
    }
};

int main() {
    abc a1;
    abc a2;
    cout << "address of a1 =" << &a1 << " ";
    cout << "address of a2 =" << &a2 << " ";
}