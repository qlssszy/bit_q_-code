#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int m = 0;

	printf("������һ�������������ж��ܷ�5��������");
	scanf("%d", &m);
	if (m % 5 == 0)
	{
		printf("������������Ա�5������");
	}
	else
	{
		printf("��������������Ա�5������");
	}
	//������������

	return 0;
}