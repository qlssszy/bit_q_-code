#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。

int main(void)
{
	int i = 0;

	for (i = 101; i <= 200; i+=2) //偶数不可能是素数
	{
		int flag = 1; //素数标志
		for (int j = 2; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}

	return 0;
}