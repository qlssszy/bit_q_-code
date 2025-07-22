#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char input[20];

again:
	system("shutdown -s -t 60");//使用系统关机命令
	printf("请注意你的电脑将在60S内关机，输入“我是猪”才能取消关机:");
	scanf("%s", input);
	if (strcmp("我是猪", input) == 0) //使用库函数判断字符串是否相等
		system("shutdown -a");
	else
		goto again;  //goto语句跳转，循环判断

	return 0;
}