#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ�������
int main()
{
	int i, x, y, z;
	printf("ˮ�ɻ���Ϊ\n");
	for (i = 100; i < 1000; i++)
	{
		x = i / 100;//��λ
		y = i / 10 - x * 10;//ʮλ
		z = i % 10;//��λ
		if (i == pow(x, 3) + pow(y, 3) + pow(z, 3))
		{
			printf("%d\n", i);	
		}
	}
	system("pause");
	return 0;
}