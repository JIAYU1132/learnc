#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int n = 0;
	for (i = 1; i <= 13; i += 2)//����������13��*,ÿ����2��
	{
			for (n = 1;n <= i ; n++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 11; i>=1 ;i -= 2)//�ڰ���11��*��ʼ,ÿ�м�����
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









