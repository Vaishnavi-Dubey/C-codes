// divide by zero exception
#include <iostream>

using namespace std;

void division(double a, double b) {
    if (b == 0)
        throw 1;
    cout << a / b;
}

int main() {
    double a, b;
    cin >> a >> b;
    try {
        division(a, b);
    }
    catch (int) {
        cout << "b should not be zero\n";
    }
}