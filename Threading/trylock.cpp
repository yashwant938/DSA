
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;

void task(int id) {
    if (mtx.try_lock()) {
        cout << "Thread " << id << " acquired lock\n";

        this_thread::sleep_for(chrono::seconds(2));

        cout << "Thread " << id << " releasing lock\n";
        mtx.unlock();
    }
    else {
        cout << "Thread " << id << " failed to acquire lock\n";
    }
}

int main() {
    thread t1(task, 1);
    thread t2(task, 2);

    t1.join();
    t2.join();

    return 0;
}
