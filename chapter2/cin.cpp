//
// Created by guobao.sun on 2023/8/26.
// 2.4.5 在多函数程序中使用 using 编译指令
//

#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Plase input name: " << std::endl;

    std::cin >> name;

    std::cout << "Please input age: " << std::endl;

    std::cin >> age;

    std::cout << "name is " << name << ", age is " << age << std::endl;

    return 0;
}