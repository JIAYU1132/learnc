#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int Sum = 0;
	int num = 0;
	int a;
	printf("请输入数字\n");
	scanf("%d", &a);
	for (int i = 1; i < 6; i++)
	{
		num = num * 10 + a;
		Sum += num;
	}
	printf("%d\n", Sum);
	system("pause");
	return 0;
}