//
// Created by guobao.sun on 2023/8/26.
//

#include <iostream>
#include <fstream>

int main() {
    using namespace std;

    string filename;

    std::cout << "Enter file name:" << endl;
    cin >> filename;
    ofstream fout(filename, ios::out | ios::app);
    fout << "hello world!" << endl;
    fout.close();

    ifstream fin(filename);
    if (fin.fail()) {
        cout << "is_open" <<endl;
    }
    char ch;
    while (fin.get(ch)) {
        cout << ch;
    }
    fin.close();

    return 0;
}