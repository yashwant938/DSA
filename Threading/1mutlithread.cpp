
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void findOdd(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) count++;
    }
    cout << "Odd count: " << count << "\n";
}

void findEven(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) count++;
    }
    cout << "Even count: " << count << "\n";
}

int main() {
    int start = 0, end = 1900000;

    auto t1 = chrono::steady_clock::now();

    thread th1(findOdd, start, end);
    thread th2(findEven, start, end);

    th1.join();
    th2.join();

    auto t2 = chrono::steady_clock::now();

    auto time = chrono::duration_cast<chrono::microseconds>(t2 - t1);

    cout << "Time: " << time.count() << " us\n";
}
