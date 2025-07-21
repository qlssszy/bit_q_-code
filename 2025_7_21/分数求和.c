#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    double sum = 0.0;
    int sign = 1;  // 用于控制正负号

    for (int i = 1; i <= 100; i++) {
        sum += sign * (1.0 / i);
        sign = -sign;  // 每次循环改变符号
    }

    printf("计算结果为: %f\n", sum);
    return 0;
}