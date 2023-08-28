//
// Created by guobao.sun on 2023/8/26.
// 3.1 limits.cpp
//

#include <iostream>
#include <climits> // use limits.h for older systems

int main() {
    using namespace std;

    // initialize
    char n_char(CHAR_MAX); // alternative C++ syntax, set n_char to CHAR_MAX
    short n_short = SHRT_MAX; // traditional C initialization
    int n_int = INT_MAX;
    long n_long = LONG_MAX;

    cout << "char is " << sizeof(n_char) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "int is " << sizeof n_int << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    // cout << "long is " << sizeof(long) << " bytes." << endl;

    cout << "Maximum values:" << endl;
    cout << "char: " << n_char << endl;
    cout << "short: " << n_short << endl;
    cout << "int: " << n_int << endl;
    cout << "long: " << n_long << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;
}