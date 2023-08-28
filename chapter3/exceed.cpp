//
// Created by guobao.sun on 2023/8/26.
// 3.2 exceed.cpp
//

#include <iostream>
#include <climits> // defines INT_MAX as largest int value

#define ZERO 0 // make ZERO symbol for 0 value

int main() {
    using namespace std;

    short sam = SHRT_MAX;
    unsigned short sue = sam; // unsigned == unsigned int

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    cout << "Add $1 to each account." << endl;
    sam += 1;
    sue += 1;
    cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nPoor Sam!" << endl << endl;


    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl;
    sam -= 1;
    sue -= 1;
    cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nLucky Sue!" << endl;

    // Sam has 32767 dollars and Sue has 32767 dollars deposited.
    // Add $1 to each account.
    // Now Sam has -32768 dollars and Sue has 32768 dollars deposited.
    // Poor Sam!
    //
    // Sam has 0 dollars and Sue has 0 dollars deposited.
    // Take $1 from each account.
    // Now Sam has -1 dollars and Sue has 65535 dollars deposited.
    // Lucky Sue!

    return 0;
}