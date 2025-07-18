#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int i, j;

	printf("亲输入两个整数：");
	scanf("%d %d", &i, &j);
	for (; i > 0; i--)
	{
		for (int k = j; k > 0; k--)
		{
			printf("*");
		}
		putchar('\n');
	}

	return 0;
}
