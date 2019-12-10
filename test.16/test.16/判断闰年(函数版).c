#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//判断闰年
int Judge(int age)
{
		if (age % 400 == 0)
		{
			return 1;
		}
		else if (age % 4 == 0 && age % 100 != 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int main()
	{
		int age = 0;
		printf("请输入年份,若是闰年则显示1,若不是则显示0.\n");
		scanf("%d", &age);
		printf("%d\n",Judge(age));
		system("pause");
		return 0;
	
}

