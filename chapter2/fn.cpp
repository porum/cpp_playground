//
// Created by guobao.sun on 2023/8/26.
// 2.4 函数
//

#include <iostream>
using std::cout; // affects all function definitions in this file
using std::cin; // affects all function definitions in this file
using std::endl; // affects all function definitions in this file

int max(int, int); // function prototype

int main() {
    int a, b;

    cout << "input a number: ";
    cin >> a;
    cout << "input another number: ";
    cin >> b;

    int ret = max(a, b);

    cout << "max number is " << ret << endl;

    return 0;
}

int max(int a, int b) {
    int ret = a > b ? a : b;
    cout << "max function ret: " << ret <<endl;
    return ret;
}