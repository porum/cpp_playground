//
// Created by guobao.sun on 2023/8/26.
// structur.cpp -- a simple structure
//

#include <iostream>

struct inflatable { // structure declaration
    char name[20];
    float volume;
    double price;
};

struct torgle_register {
    unsigned int SN: 4; // 4 bits for SN value
    unsigned int: 4;    // 4 bits unused
    bool goodIn: 1;     // valid input (1 bit)
    bool goodTorgle: 1; // successful torgling
};

int main() {
    using namespace std;

    // guest is a structure variable of type inflatable
    // It's initialized to the indicated values
    inflatable guest = {
            "Glorious Gloria",
            1.88,
            29.99
    };

    // pal is a second variable of type inflatable
    inflatable pal = {
            "Audacious Arthur",
            3.12,
            32.99
    };

    // NOTE: some implementations require using static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $" << guest.price + pal.price << "!\n";

    // struct user {
    //     char name[20];
    //     int age;
    // } jack, rose;
    //
    // jack = {"jack", 18};
    // rose = {"rose", 18};

    struct perks {
        int key_number;
        char car[12];
    } mr_glitz = {
            7,
            "Packard"
    };

    return 0;
}
