#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 )//表示个位为9
		{
			num++;
		}
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}