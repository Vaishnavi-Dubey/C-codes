#include <iostream>

using namespace std;

int main() {
    try {
        //any code to monitor
        throw 10;
    }
    catch (int a) {
        cout << "integer exception" << endl << a << endl;
    }
    try {
        //-------
        throw "hello";
    }
    catch (const char a[]) {
        cout << a;
    }
}