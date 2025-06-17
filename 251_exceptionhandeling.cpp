#include <iostream>

using namespace std;

int main() {
    try {
        //any code to monitor
        throw 10.89;
    }
    catch (const char a[]) {
        cout << a;
    }
    catch (int a) {
        cout << "integer exception" << endl << a << endl;
    }
    catch (double a) {
        cout << a;
    }
}