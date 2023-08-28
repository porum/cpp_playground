//
// Created by guobao.sun on 2023/8/27.
//
#include <stdio.h>

// 指针就是地址
// * 取值
// & 取址
int main() {
    // int a, b;
    // int *p1, *p2, p;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b); // 接受的是地址
    //
    // p1 = &a;
    // p2 = &b;
    //
    // if (a < b) {
    //     p = *p1;
    //     *p1 = *p2;
    //     *p2 = p;
    // }
    //
    // printf("%d, %d\n", a, b);
    // printf("%d, %d\n", *p1, *p2);


    // 2行3列
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int *p[2] = {arr[0], arr[1]};
    int (*q)[3] = arr;
    printf("%d\n", *p[1]);
    printf("%d\n", *p[1] + 2);
    printf("%d\n", *(p[1] + 2));
    printf("%d\n", *q[1]);


    return 0;
}