#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

int main()
{
	int Sum = 0;
	int num = 0;
	int a;
	printf("����������\n");
	scanf("%d", &a);
	for (int i = 1; i < 6; i++)
	{
		num = num * 10 + a;
		Sum += num;
	}
	printf("%d\n", Sum);
	system("pause");
	return 0;
}