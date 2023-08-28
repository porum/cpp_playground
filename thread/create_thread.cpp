//
// Created by guobao.sun on 2023/8/28.
//
#include <iostream>
#include <thread>

using namespace std;

time_t timestamp() {
    std::chrono::time_point<std::chrono::system_clock, std::chrono::milliseconds> tp = std::chrono::time_point_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now());
    auto tmp = std::chrono::duration_cast<std::chrono::milliseconds>(tp.time_since_epoch());
    // std::time_t timestamp = std::chrono::system_clock::to_time_t(tp);
    return tmp.count();
}

void thread_func() {
    cout << "enter thread_func " << timestamp() << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "exit thread_func " << timestamp() << endl;
}

class Base {
public:
    void operator()(int x) {
        cout << "operator x=" << x << endl;
    }

    void run() {
        cout << "run" << endl;
    }

    static void static_run() {
        cout << "static_run" << endl;
    }
};

int main() {
    auto startTime = chrono::high_resolution_clock::now();

    // 使用函数指针创建线程
    thread thread1(thread_func);

    // lambda函数创建线程
    thread thread2([](int x) {
        while (x-- > 0) {
            cout << x << endl;
            this_thread::sleep_for(chrono::milliseconds(200));

        }
    }, 5);

    thread1.join();
    thread2.join();

    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(endTime - startTime);
    cout << "duration: " << duration.count() << endl;

    // 使用成员函数创建线程
    Base base;
    thread thread3(&Base::run, &base);
    thread3.join();

    // 静态函数创建线程
    thread thread4(&Base::static_run);
    thread4.join();

    // 使用函数对象创建线程
    thread thread5(Base(), 10);
    thread5.join();


    return 0;
}