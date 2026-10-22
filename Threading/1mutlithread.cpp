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

    // Start measuring time
    auto startTime = chrono::high_resolution_clock::now();

    thread t1(findOdd, start, end);
    thread t2(findEven, start, end);

    t1.join();
    t2.join();

    // Stop measuring time
    auto endTime = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(
        endTime - startTime
    );

    cout << "Execution Time: " << duration.count() << " us\n";
}