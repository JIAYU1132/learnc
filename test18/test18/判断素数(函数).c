#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Judge(int num)
{
		int j = 0;
		for (j = 2; j <= num; j++)
		{		
			if (num == j)
			{
				return 1;
			}
			if (num % j == 0)
			{	
				return 0;
			}
			if (num == j)
			{
				return 1;
			}			
		}
	}

int main()
{
	int num;
	printf("请输入要判断的数\n");
	scanf("%d", &num);
	printf("%d", Judge(num));
	system("pause");
	return 0;
}