////��д����ģ��������������ĳ����� AA
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int password = 888888;
	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		printf("����������:  \n");
		scanf("%d", &num);
		if (num == password)
		{
			printf("��½�ɹ�!!!\n");
			break;

		}
		else
		{
			printf("��½ʧ��!!!\n");
		}
	}
	system("pause");
	return 0;
}