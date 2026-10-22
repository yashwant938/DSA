
#include <iostream>
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <chrono>
using namespace std;

int main() {
    cout << boolalpha;

    // 1. mutex::try_lock()
    mutex m;
    m.lock(); // Main thread owns mutex

    bool busy = false;
    thread t1([&]() {
        busy = m.try_lock();
        if (busy) m.unlock();
    });
    t1.join();

    m.unlock();
    bool free = m.try_lock();
    if (free) m.unlock();

    cout << "1. try_lock: busy=" << busy
         << " free=" << free << "\n";

    // 2. unique_lock + try_to_lock
    mutex u;
    u.lock();

    bool acquired = false;
    thread t2([&]() {
        unique_lock<mutex> lk(u, try_to_lock);
        acquired = lk.owns_lock();
    });
    t2.join();
    u.unlock();

    unique_lock<mutex> lk(u, defer_lock);
    bool deferred = lk.try_lock();
    if (deferred) lk.unlock();

    cout << "2. unique_lock: busy=" << acquired
         << " deferred=" << deferred << "\n";

    // 3. std::try_lock() with two mutexes
    mutex a, b;
    b.lock();

    int result = -2;
    thread t3([&]() {
        result = std::try_lock(a, b);
        if (result == -1) {
            a.unlock();
            b.unlock();
        }
    });
    t3.join();
    b.unlock();

    cout << "3. std::try_lock: failed index="
         << result << "\n";

    int both = std::try_lock(a, b);
    if (both == -1) {
        a.unlock();
        b.unlock();
    }
    cout << "   both free: " << both << "\n";

    // 4. timed_mutex::try_lock_for()
    timed_mutex tm;
    tm.lock();

    bool timed = false;
    long long waited = 0;

    thread t4([&]() {
        auto start = chrono::steady_clock::now();
        timed = tm.try_lock_for(chrono::milliseconds(40));
        waited = chrono::duration_cast<chrono::milliseconds>(
            chrono::steady_clock::now() - start
        ).count();
        if (timed) tm.unlock();
    });
    t4.join();
    tm.unlock();

    cout << "4. try_lock_for: " << timed
         << " waited=" << waited << "ms\n";

    // 5. timed_mutex::try_lock_until()
    bool until = tm.try_lock_until(
        chrono::steady_clock::now() +
        chrono::milliseconds(40)
    );
    if (until) tm.unlock();

    cout << "5. try_lock_until: " << until << "\n";

    // 6. shared_mutex::try_lock_shared()
    shared_mutex sm;
    sm.lock_shared();

    bool reader = false;
    thread t5([&]() {
        reader = sm.try_lock_shared();
        if (reader) sm.unlock_shared();
    });
    t5.join();

    bool writer = false;
    thread t6([&]() {
        writer = sm.try_lock();
        if (writer) sm.unlock();
    });
    t6.join();
    sm.unlock_shared();

    cout << "6. shared_mutex: reader=" << reader
         << " writer=" << writer << "\n";

    // 7. recursive_mutex::try_lock()
    recursive_mutex rm;
    rm.lock();

    bool again = rm.try_lock();
    if (again) rm.unlock();
    rm.unlock();

    cout << "7. recursive_mutex: " << again << "\n";
}
