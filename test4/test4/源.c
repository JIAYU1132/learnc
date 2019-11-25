#include<stdio.h>
#include<stdlib.h>
//输出乘法口诀表
int main()
{
	int i = 0 , j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d*%d=%d\n", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}