#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//编写一个函数实现n^k，使用递归实现
int fun(int n,int k)
{
	if (k == 1)
	{
		return n;
	}
	else
	{
		return n*fun(n,k-1);
	}
	

}
int main()
{
	int n = 0;
	int k = 0;
	printf("请输入您要求的底数n和次方数k: \n");
	scanf("%d%d", &n,&k);
	int Mul = 0;
	Mul = fun(n, k);
	printf("%d\n", Mul);
	system("pause");
	return 0;
}