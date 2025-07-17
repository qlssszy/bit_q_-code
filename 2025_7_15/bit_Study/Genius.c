#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int m;
	m = 0;

	printf("请输入测试的智商结果：");
	scanf("%d", &m);
	if(m >= 140)
		printf("Gemius!!");
	else
		printf("no!");

	return 0;

}
