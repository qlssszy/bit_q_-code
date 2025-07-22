#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(void);

int main(void)
{
	int m;

	srand((unsigned int)time(NULL));//让随机数种子跟随当前时间变得随机
	do
	{
		printf("*******************\n");
		printf("*****1——玩游戏*****\n");
		printf("*****0——退出游戏***\n");
		printf("*******************\n");
		printf("请选择：");
		scanf("%d", &m);
		switch (m)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏");
				break;
			default:
				printf("输入错误，请重新输入:\n");
				break;
		}

	} while (m);



	return 0;
}

void game()
{
	int r;
	int num;
	int count = 5;

	r = rand() % 100 + 1; //产生随机数
	printf("总共有5次机会！！！\n");
	do
	{
		printf("请输入你猜的数字：");
		scanf("%d", &num);
		if (num > r)
		{
			printf("猜大了\n");
			printf("还有%d次机会！！！\n", --count);
		}
		else if (num < r)
		{
			printf("猜小了\n");
			printf("还有%d次机会！！！\n", --count);
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	} while (count);
	printf("游戏结束！随机数是 %d \n", r);

}