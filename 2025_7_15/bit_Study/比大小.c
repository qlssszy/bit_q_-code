#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("请输入两个数字：");
	scanf("%d %d", &a, &b);
	if (a == b)
	{
		printf("%d=%d", a, b);
	}
	else if (a > b)
	{
		printf("%d>%d", a, b);
	}
	else
		printf("%d<%d", a, b);

	return 0;
}