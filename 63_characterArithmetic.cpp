#include <iostream>

using namespace std;

int main() {
    char ch1 = 125, ch2 = 10;
    ch1 = ch1 + ch2;
    cout << static_cast<int>(ch1) << endl;
    cout << static_cast<char>(ch1 - ch2 - 4) << endl;
    return 0;
}
