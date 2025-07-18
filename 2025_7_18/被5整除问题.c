#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int M = 0;

	printf("请输入一个整数（用于判断能否被5整除）：");
	scanf("%d", &M);
	if (M % 5 == 0)
	{
		printf("输入的整数可以被5整除！");
	}
	else
	{
		printf("输入的整数不可以被5整除！");
	}

	return 0;
}