#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����

int main(void)
{
	int i = 0;

	for (i = 101; i <= 200; i+=2) //ż��������������
	{
		int flag = 1; //������־
		for (int j = 2; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}

	return 0;
}