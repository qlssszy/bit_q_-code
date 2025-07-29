#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*1 1 2 3 5 8 13 21 33 54..... 该数列为斐波那契数列*/
int Fib(int n);


int main(void)
{
	int n;

	printf("请输入数字：");
	scanf("%d", &n);
	printf("第%d个斐波那契数是%d", n, Fib(n));

	return 0;
}

//用递归的方式实现，当数字变得越来越大后，重复计算的数就会越来越多，计算速度会越来越慢。递归就显得不太合适了
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

//用迭代（循环）的方式实现，这个方法更合适一些
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