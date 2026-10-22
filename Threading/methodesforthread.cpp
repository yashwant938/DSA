#include<bits/stdc++.h>

using namespace std;
void task(int x) {
    cout << "Value: " << x << endl;
}

int main() {
    thread t1(task, 10);
    t1.join();
}



/// using lambda

/*
int main() {
    thread t1([]() {
        cout << "Hello from Lambda\n";
    });

    t1.join();
}
*/
//using functor

/*

class Task {
public:
    void operator()() {
        cout << "Hello from Functor\n";
    }
};

int main() {
    thread t1{Task{}};
    t1.join();
}
    */

    // using class member funciton

/*

class Task {
public:
    void run(int x) {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Task obj;

    thread t1(&Task::run, &obj, 100);
    t1.join();
}
*/


//using static mmemeber

/*
class Task {
public:
    static void run() {
        cout << "Static function\n";
    }
};

int main() {
    thread t1(&Task::run);
    t1.join();
}


*/