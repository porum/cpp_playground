//
// Created by guobao.sun on 2023/8/26.
//

#include <iostream>

int main() {
    using namespace std;

    char ch;

    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hello! Thank you for the " << ch << " character." << endl;

    // 输入时，cin 将键盘输入的 M 转换为 77；
    // 输出时，cout将值 77 转换为所显示的字符 M；
    // cin 和 cout 的行为都是由变量类型引导的。

    return 0;
}