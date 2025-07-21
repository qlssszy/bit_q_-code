#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int arr[10];
	int i, j;
	int temp = 0;

	printf("请输入10个数字：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n最大值为：%d", arr[9]);

	return 0;
}