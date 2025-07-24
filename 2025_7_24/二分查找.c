#define _CRT_SECURE_NO_WARNINGS 1

/*折半查找的前提是数组有序排列*/

#include <stdio.h>


int main(void)
{
	int arry[] = { 1,5,9,78,99,101,105,106,110,120 };
	int left, right;
	int mid;
	int flag = 0;
	int k;

	left = 0; //标志位
	right = sizeof(arry) / sizeof(arry[0]) - 1;
	printf("请输入你要寻找的数字：");
	scanf("%d", &k);
	while (left <= right)
	{
		//mid = (left + right) / 2;
		mid = left + (right - left) / 2;//优化代码 
		if (arry[mid] < k)
		{
			left = mid + 1;
		}
		else if (arry[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("已找到该数字，在数组中的下标是：%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag != 1)
	{
		printf("没找到\n");
	}

	return 0;
}