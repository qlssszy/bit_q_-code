#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int count = 1;

	for (int i = 10; i <= 100; i++)
	{
		if (i / 1 % 10 == 9 || i / 10 % 10 == 9)
		{
			count++;
		}
	}
	printf("总共有%d个数字9", count);


	return 0;
}