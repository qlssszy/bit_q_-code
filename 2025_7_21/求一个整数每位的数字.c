#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() 
{
	int n;
	int unitPlace;
	int tenPlace;
	int hundredPlace;
	
	printf("������һ����λ������");
	while (scanf("%d", &n) == 1)
	{
		//һ�����ƣ��������ǧλ����λ�ȵ�
		unitPlace = n / 1 % 10; // ��λ
		tenPlace = n / 10 % 10; // ʮλ
		hundredPlace = n / 100 % 10; // ��λ

		printf("��λ: %d\n", unitPlace);
		printf("ʮλ: %d\n", tenPlace);
		printf("��λ: %d\n", hundredPlace);
		printf("������һ��������");
	}

	return 0;
}