#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void Print(int n);


//递归在书写的时候，有2个必要条件：
// 递归存在限制条件，当满⾜这个限制条件的时候，递归便不再继续。
//每次递归调⽤之后越来越接近这个限制条件。
int main(void)
{
	int a = 0;

	printf("请输入数字：");
	scanf("%d", &a);
	Print(a);

	return 0;
}

void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	//顺序执行
	printf("%d ", n % 10);
}