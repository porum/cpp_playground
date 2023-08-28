//
// Created by guobao.sun on 2023/8/28.
//

#include<iostream>

using namespace std;

// [ 捕获 ] ( 形参 ) -> ret { 函数体 };
// -> ret 可以省略, 会自动推导返回类型
// []：默认不捕获任何变量；
// [=]：默认以复制捕获所有变量；
// [&]：默认以引用捕获所有变量；
// [x]：仅以复制捕获x，其它变量不捕获；
// [x...]：以包展开方式复制捕获参数包变量； // 捕获可变参数x
// [&x]：仅以引用捕获x，其它变量不捕获；
// [&x...]：以包展开方式引用捕获参数包变量；
// [=, &x]：默认以复制捕获所有变量，但是x是例外，通过引用捕获；
// [&, x]：默认以引用捕获所有变量，但是x是例外，通过复制捕获；
// [this]：通过引用捕获当前对象（其实是复制指针）；
// [*this]：通过复制方式捕获当前对象；
int main() {

    auto lambda = [](int x) -> int {
        return x * x;
    };
    cout << lambda(9) << endl;

    auto lambda2 = [](const string &str) -> string {
        return str + "!";
    };
    cout << lambda2("hello world") << endl;

    int x = 1;
    auto lambda3 = [&x](int a) {
        x++;
        return a + x;
    };
    cout << lambda3(2) << ", x=" << x << endl;

    return 0;
}