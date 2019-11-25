#include<stdio.h>
#include<stdlib.h>
int main()
{
	for (int i = 100; i <= 200; i++)//讲100至200的值全部访问
	{
		int j = 0;
		for (j = 2; j <= i; j++)//素数除了1以外的因数就是它本身,直接从2开始作为除数
		{
			if (i % j == 0)//若取余任何一个数等于零,则证明有不是他本身的因数,直接排除,跳出循环
			{
				break;
			}
		}
			if (i == j)
			{
				printf("%d\n", i);
			}
	}
	system("pause");
	return 0;
}