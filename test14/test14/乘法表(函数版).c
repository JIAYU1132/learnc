#include<stdio.h>
#include<stdlib.h>
//����˷��ھ���(������)
int MulForm()
{
	int i = 0, j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	printf("\n", MulForm());
	system("pause");
	return 0;
}