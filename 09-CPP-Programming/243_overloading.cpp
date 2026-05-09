// Pre, post operator overloading
#include <iostream>

using namespace std;

class abc {
    int a, b, c, d;
public:
    abc() {
        a = 0, b = 0;
        c = 0, d = 0;
    }

    void display() {
        cout << "a= " << a << " " << "b= " << b << endl;
        cout << "c= " << c << "d= " << d << endl;
    }

    void operator++(); //pre increment operator
    void operator++(int); //post increment operator
};

void abc::operator++() {
    ++a;
    ++b;
}

void abc::operator++(int) {
    c++;
    d++;
}

main() {
    abc a1;
    ++a1; //operator function without parameter will be called
    a1++; //operator function with parameter will be called
    a1.display();
}