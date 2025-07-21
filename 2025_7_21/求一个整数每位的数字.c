#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() 
{
	int n;
	int unitPlace;
	int tenPlace;
	int hundredPlace;
	
	printf("请输入一个三位整数：");
	while (scanf("%d", &n) == 1)
	{
		//一此类推，可以求出千位，万位等等
		unitPlace = n / 1 % 10; // 个位
		tenPlace = n / 10 % 10; // 十位
		hundredPlace = n / 100 % 10; // 百位

		printf("个位: %d\n", unitPlace);
		printf("十位: %d\n", tenPlace);
		printf("百位: %d\n", hundredPlace);
		printf("请输入一个整数：");
	}

	return 0;
}