#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int DigitSum(int num)
{
	if (num / 10 == 0)
	{
		return num;
	}
	return num % 10 + DigitSum(num / 10);

}
int main()
{
	int num = 0;
	printf("������һ���Ǹ�����: \n");
	scanf("%d", &num);
	printf("%d\n", DigitSum(num));
	system("pause");
	return 0;
}