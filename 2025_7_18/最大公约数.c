#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int i;
	int a, b;
	int gcd = 1;

	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	if (a % b == 0)
	{
		printf("最大公约数为%d\n", b);
	}
	else if (b % a == 0)
	{
		printf("最大公约数为%d\n", a);
	}
	else
	{
		for (i = 1; i <= a && i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				gcd = i; 
			}
		}
		printf("最大公约数为%d", gcd);

	}
	

	return 0;
}