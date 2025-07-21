#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int year;

	//printf("请输入一个年份：");
	//scanf("%d", &year);
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d是闰年\n", year);
		}
	}




	return 0;
}
	
