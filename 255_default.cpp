#include <iostream>

using namespace std;

int main() {
    try {
        throw a;
    }
    catch (int a) {}
    catch (...) {
        cout << "A";
    }
}