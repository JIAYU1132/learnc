#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int n = 0;
	for (i = 1; i <= 13; i += 2)//到第七行有13个*,每行增2个
	{
			for (n = 1;n <= i ; n++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 11; i>=1 ;i -= 2)//第八行11个*开始,每行减两个
		{
			for (n = 1; n <= i; n++)
			{
				printf("*");
			}
			printf("\n");
		}
			

	system("pause");
	return 0;
}









