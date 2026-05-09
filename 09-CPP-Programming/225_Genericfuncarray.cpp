#include<iostream>

using namespace std;

template<typename t>
void array(t *ptr) {
    int i;

    for (i = 0; i <= 4; i++) {
        cin >> ptr[i];
    }
    cout << "the array elements are " << endl;
    for (i = 0; i <= 4; i++) {
        cout << " " << ptr[i];
    }
}

main() {
    int a[5];
    array(a);

    double b[5];
    array(b);
}