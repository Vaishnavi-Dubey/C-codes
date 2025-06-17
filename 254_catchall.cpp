#include <iostream>

using namespace std;

main() {
    try {
        throw a;
    }
    catch (int a) {
        cout << "matching catch found"
    }
    catch (...) { //will execute if no matching catch found for the exception
        cout << "this is default catch"

    }
}