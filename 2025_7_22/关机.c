#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

int main(void)
{
	char input[20];

again:
	system("shutdown -s -t 60");//ʹ��ϵͳ�ػ�����
	printf("��ע����ĵ��Խ���60S�ڹػ������롰����������ȡ���ػ�:");
	scanf("%s", input);
	if (strcmp("������", input) == 0) //ʹ�ÿ⺯���ж��ַ����Ƿ����
		system("shutdown -a");
	else
		goto again;  //goto�����ת��ѭ���ж�

	return 0;
}