#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int a, b;
	a = b = 0;

	printf("请输入两个数值：");
	scanf("%d %d", &a, &b);
	printf("%d除以%d=%d,余上%d", a, b, a / b, a % b);

	return 0;
}