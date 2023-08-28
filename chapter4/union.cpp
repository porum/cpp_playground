//
// Created by guobao.sun on 2023/8/26.
//

#include <iostream>
#include <variant>

// 共用体 同一时间只能存储一个值，因此它必须有足够的空间来存储最大的成员，所以共用体的长度为其最大成员的长度。
// 共用体的用途之一是，当数据项使用两种或多种格式（但不会同时使用）时，可节省空间。
union one4all {
    int int_val;
    long long_val;
    double double_val;
};

enum Gender {
    male = 0,
    female = 1
};

struct User {
    union id {
        const char *id_str;
        int id_num;
    } id_val;
    Gender gender;
    std::string name;
    std::string country;
};

int main() {
    using namespace std;

    one4all pail;
    pail.int_val = 15; // store an int
    cout << pail.int_val << endl;
    pail.double_val = 1.38; // store a double, int value is lost
    cout << pail.double_val << endl;
    pail.long_val = 1000L; // store a long, double value is lost
    cout << pail.long_val << endl;

    User users[] = {
            {
                    .id_val = {.id_num = 12},
                    .gender = male,
                    .name = "Jack",
                    .country = "China",
            },
            {
                    .id_val = {.id_str = "abcdefg"},
                    .gender = female,
                    .name = "Rose",
                    .country = "US",
            }
    };


    for (int i = 0, size = sizeof(users) / sizeof(users[0]); i < size; i++) {
        User user = users[i];
        cout << "name: " << user.name;
        if (user.gender == male) {
            cout << ", id: " << user.id_val.id_num << endl;
        } else {
            cout << ", id: " << user.id_val.id_str << endl;
        }
    }


    return 0;
}