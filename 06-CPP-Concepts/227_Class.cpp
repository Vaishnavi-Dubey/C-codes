#include <iostream>

using namespace std;

class addition //class name
{
private:  //access specifier
    int a, b;  //data mmbers
public:
    void sum()  //method to modify data members
    {
        a = 100;
        b = 300;
        cout << a + b
    }
};

int main() {
    addition a1;
    a1.sum();
    return 0;
}