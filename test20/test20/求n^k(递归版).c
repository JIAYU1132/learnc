#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
	printf("��������Ҫ��ĵ���n�ʹη���k: \n");
	scanf("%d%d", &n,&k);
	int Mul = 0;
	Mul = fun(n, k);
	printf("%d\n", Mul);
	system("pause");
	return 0;
}