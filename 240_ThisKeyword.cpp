//this Reserve word/ this pointer –
// resolve the problem, of same name of data member and the variable passed in real time as parameter
#include <iostream>

using namespace std;

class abc {
private:
    int x;
public:
    void get(int x) {
        this->x = x;
        cout << "value of this=" << this << endl; //this pointer stores the address of the calling object
    }

    void dis() {
        cout << "x= " << x << endl;
    }
};

main() {
    abc a1;
    cout << "address of a1 = " << &a1 << endl;
    a1.get(20);
    a1.dis();
}