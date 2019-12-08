//递归方式实现打印一个整数的每一位 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int print(int n)
{
	if (n > 9)
	{
		print(n / 10); 
	}
	printf("%d  ", n % 10);

}
int main()
{
	int n = 0;
	printf("请输入一个整数: \n");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}