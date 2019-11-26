#include<stdio.h>
#include<stdlib.h>
//判断1000年-- - 2000年之间的闰年
int main()
{
	int age = 0;
	for (age = 1000; age <= 2000; age++)//访问1000--2000年
	{
		if (age % 400 == 0)//能被400整除的年份
		{
			printf("%d\n", age);
		}
		else if (age % 4 == 0 && age % 100 != 0)//能被4整除且不能被100整除的年份
		{
			printf("%d\n", age);
		}
	}
	system("pause");
	return 0;
}

