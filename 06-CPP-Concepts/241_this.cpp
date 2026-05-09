#include <iostream>

using namespace std;

class _this {
private:
    int x;
public:
    void get(int x) {
        //the "this" pointer is used to retrieve the object's x hidden by the local variable 'x'
        this->x = x;
    }

    void dis() {
        cout << "x= " << x << endl;
    }
};

main() {
    _this a1;
    a1.get(10);
    a1.dis();
}
// this pointer holds the address of calling object