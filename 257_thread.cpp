#include <iostream>
#include <thread>

using namespace std;

void thrd1() {
    int i = 0;
    while (i <= 3) {
        cout << i++ << " ";
    }
}

void thrd2() { cout << "thread 2\n"; }

int main() {
    thread t1(thrd1);
    thread t2(thrd2);
    //join() means main thread/function will wait for child thread to complete.
    t1.join();  //main thread waits for thread t1 to complete
    t2.join();  //main thread waits for thread t2 to complete
    return 0;
}