#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(void);

int main(void)
{
	int m;

	srand((unsigned int)time(NULL));//����������Ӹ��浱ǰʱ�������
	do
	{
		printf("*******************\n");
		printf("*****1��������Ϸ*****\n");
		printf("*****0�����˳���Ϸ***\n");
		printf("*******************\n");
		printf("��ѡ��");
		scanf("%d", &m);
		switch (m)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ");
				break;
			default:
				printf("�����������������:\n");
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

	r = rand() % 100 + 1; //���������
	printf("�ܹ���5�λ��ᣡ����\n");
	do
	{
		printf("��������µ����֣�");
		scanf("%d", &num);
		if (num > r)
		{
			printf("�´���\n");
			printf("����%d�λ��ᣡ����\n", --count);
		}
		else if (num < r)
		{
			printf("��С��\n");
			printf("����%d�λ��ᣡ����\n", --count);
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	} while (count);
	printf("��Ϸ������������� %d \n", r);

}