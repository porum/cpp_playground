//
// Created by guobao.sun on 2023/8/26.
//

#include <iostream>
#include <vector>

int main() {
    using namespace std;

    vector<int> ratings(5); // a vector of 5 ints
    int n;
    cin >> n;
    vector<double> scores(n); // a vector of n doubles
    // 由于操作符[]被重载，因此创建 vector 对象后，可以使用通常的数组表示法来访问各个元素
    ratings[0] = 9;
    for (int i = 0; i < n; i++) {
        cout << scores[i] << endl;
    }
}