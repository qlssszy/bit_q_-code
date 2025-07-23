#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
	char arr1[] = "hello bit!!!!!!!!!!";
	char arr2[] = "*******************";
	int left, right;

	left = 0;
	right = strlen(arr2) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000); //S大写，需要包含<windows.h>
		system("cls"); //清屏函数
		left++;
		right--;
	}


	return 0; 
}