#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    double sum = 0.0;
    int sign = 1;  // ���ڿ���������

    for (int i = 1; i <= 100; i++) {
        sum += sign * (1.0 / i);
        sign = -sign;  // ÿ��ѭ���ı����
    }

    printf("������Ϊ: %f\n", sum);
    return 0;
}