#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*1 1 2 3 5 8 13 21 33 54..... ������Ϊ쳲���������*/
int Fib(int n);


int main(void)
{
	int n;

	printf("���������֣�");
	scanf("%d", &n);
	printf("��%d��쳲���������%d", n, Fib(n));

	return 0;
}

//�õݹ�ķ�ʽʵ�֣������ֱ��Խ��Խ����ظ���������ͻ�Խ��Խ�࣬�����ٶȻ�Խ��Խ�����ݹ���Եò�̫������
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}

//�õ�����ѭ�����ķ�ʽʵ�֣��������������һЩ
int Fib(int n)
{
	int a, b, c;

	a = b = c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}