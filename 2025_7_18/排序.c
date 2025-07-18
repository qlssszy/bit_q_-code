#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int arr[3] = { 1,2,3 };
	int temp;

	//√∞≈›≈≈–Ú
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 - 1 - i; j++)
		{
			if (arr[j] <  arr[j + 1]) //Ωµ–Ú≈≈¡– ”√  <  ∫≈
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;

}