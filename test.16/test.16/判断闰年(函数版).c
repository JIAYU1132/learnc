#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ж�����
int Judge(int age)
{
		if (age % 400 == 0)
		{
			return 1;
		}
		else if (age % 4 == 0 && age % 100 != 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int main()
	{
		int age = 0;
		printf("���������,������������ʾ1,����������ʾ0.\n");
		scanf("%d", &age);
		printf("%d\n",Judge(age));
		system("pause");
		return 0;
	
}

