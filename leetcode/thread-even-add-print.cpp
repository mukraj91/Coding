#include <iostream>
#include <thread>
#include <condition_variable>
using namespace std;

mutex mu;
condition_variable cond;
int count = 1;

void PrintOddAndEven(bool even, int n){
    while(count < n){
        unique_lock<mutex> lk(mu);
        cond.wait(lk, [&](){return count%2 == even;});
        cout << count++ << " ";
        lk.unlock();
        cond.notify_all();
    }
}

int main() {
    int n = 100;
    thread t1(PrintOddAndEven, true, n);
    thread t2(PrintOddAndEven, false, n);

    t1.join();
    t2.join();
    return 0;
}