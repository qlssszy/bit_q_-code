#define _CRT_SECURE_NO_WARNINGS 1

/*�۰���ҵ�ǰ����������������*/

#include <stdio.h>


int main(void)
{
	int arry[] = { 1,5,9,78,99,101,105,106,110,120 };
	int left, right;
	int mid;
	int flag = 0;
	int k;

	left = 0; //��־λ
	right = sizeof(arry) / sizeof(arry[0]) - 1;
	printf("��������ҪѰ�ҵ����֣�");
	scanf("%d", &k);
	while (left <= right)
	{
		//mid = (left + right) / 2;
		mid = left + (right - left) / 2;//�Ż����� 
		if (arry[mid] < k)
		{
			left = mid + 1;
		}
		else if (arry[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("���ҵ������֣��������е��±��ǣ�%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag != 1)
	{
		printf("û�ҵ�\n");
	}

	return 0;
}