//
// Created by guobao.sun on 2023/8/26.
// 3.3 hexoct.cpp
//

#include <iostream>

int main() {
    using namespace std;

    int chest = 42; // decimal integer constant
    int waist = 0x42; // hexadecimal integer constant
    int inseam = 042; // octal integer constant

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << endl;
    cout << "waist = " << waist << endl;
    cout << "inseam = " << inseam << endl;

    chest = 42;
    waist = 42;
    inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << "(decimal)" << endl;
    cout << hex;
    cout << "waist = " << waist << "(hexadecimal)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << "(octal)" << endl;

    return 0;
}