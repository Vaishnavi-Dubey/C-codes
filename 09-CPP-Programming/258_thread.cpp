#include <iostream>
#include <thread>

using namespace std;

void thrd1(int a) {
    cout << a;
}

void thrd2(int b) {
    cout << b;
}

int main() {
    thread t1(thrd1, 100);
    thread t2(thrd2, 200);
    t1.join();
    t2.join();
    return 0;

}
