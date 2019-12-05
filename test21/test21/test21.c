#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
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
	printf("请输入一个非负整数: \n");
	scanf("%d", &num);
	printf("%d\n", DigitSum(num));
	system("pause");
	return 0;
}