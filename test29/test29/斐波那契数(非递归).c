#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int func(int n)
{
	int a = 1;
	int b = 1;
	int count = 0;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		for (int i = 3; i <= n; i++)
		{
			count = a + b;
			a = b;
			b = count;
			
		}
	}
	return count;
}
int main()
{
	int n = 0;
	printf("请输入您要查找的是第几个斐波那契数: \n");
	scanf("%d", &n);
	printf("%d\n", func(n));
	system("pause");
	return 0;
}