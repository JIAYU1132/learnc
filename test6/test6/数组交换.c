#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10]; 
	int b[10]; 
	int c[10];
	int i;
	printf("请输入数组a:");
	for (i=0; i < 10; i++)
	{
		scanf("%d", &a[i]);	
	}
	printf("请输入数组b:");
	for (i=0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i=0; i < 10; i++)
	{
		c[i] = b[i];
		b[i] = a[i];
		a[i] = c[i];
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
		printf("\n");
		for (i = 0; i < 10; i++)
		{
			printf("%d", b[i]);
		}
		
		printf("\n");
	

	system("pause");
	return 0;
}