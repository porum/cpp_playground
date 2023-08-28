//
// Created by guobao.sun on 2023/8/26.
//

#include <iostream>

int main() {
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // assignment for string objects and character arrays
    str1 = str2;
    strcpy(charr1, charr2);

    // appending for string objects and character arrays
    str1 += " paste"; // add paste to end of str1
    strcat(charr1, " juice"); // add juice to end of charr1

    // finding the length of a string object and a C-style string
    int len1 = str1.size(); // obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1

    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";

    cout << "The string " << str2 << " contains " << str2.size() << " characters.\n";
    cout << "The string " << charr2 << " contains " << strlen(charr2) << " characters.\n";

    return 0;
}