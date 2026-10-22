
#include <bits/stdc++.h>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

int counter = 0;
mutex mtx;

void increment() {
    for (int i = 0; i < 100000; i++) {
        mtx.lock();
        counter++;
        mtx.unlock();
    }
}

int main() {
    auto startTime = chrono::high_resolution_clock::now();

    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    auto endTime = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(
        endTime - startTime
    );

    cout << "Counter: " << counter << endl;
    cout << "Time: " << duration.count() << " us\n";

    return 0;
}
