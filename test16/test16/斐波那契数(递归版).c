#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ֳƻƽ�ָ����С��ֳ�Ϊ���������С���ָ��������һ�����У�1��1��2��3��5��8��13��21��34������
//ǰ������1,�ӵ����ʼ����ǰ����ĺ�
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
	printf("��������Ҫ���ҵ��ǵڼ���쳲�������: \n");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}