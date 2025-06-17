// area of rectangle using friend function
#include<iostream>

using namespace std;

class rec {
private:
    int l, b;
public:
    void display() {
        cout << l * b << " ";
    }

    friend void get_value(int, int);
};

void get_value(int x, int y) {
    rec r1;
    r1.l = x;
    r1.b = y;
    r1.display();
}

int main() {
    get_value(10, 20);
}