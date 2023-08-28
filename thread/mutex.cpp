//
// Created by guobao.sun on 2023/8/28.
//
#include <iostream>
#include <thread>

using namespace std;

int x = 0;
mutex mtx;

void increment() {
    mtx.lock();
    x++;
    mtx.unlock();
}

int main() {
    thread thread1(increment);
    thread thread2(increment);
    thread1.join();
    thread2.join();

    cout << "x=" << x << endl;

    return 0;
}