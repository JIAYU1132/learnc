#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//递归和非递归分别实现求第n个斐波那契数
//又称黄金分割数列、又称为“兔子数列”，指的是这样一个数列：1、1、2、3、5、8、13、21、34、……
//前两项是1,从第三项开始等于前两项的和
int fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return(fib(n - 1) + fib(n - 2));
	}
}
int main()
{
	int n = 0;
	printf("请输入您要查找的是第几个斐波那契数: \n");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}