#include <iostream>

using namespace std;

main() {
    int a, count = 0;
    while (1) {
        cin >> a;
        try {
            if (a == 1) {
                count = count + 1;
                throw 1;
            }
        }
        catch (int b) {
            if (count == 3) {
                exit(0)
            } else {
                cout << "don't press 1\n";
            }
        }
    }
}