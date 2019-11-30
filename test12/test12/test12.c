////编写代码模拟三次密码输入的场景。 AA
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int password = 888888;
	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		printf("请输入密码:  \n");
		scanf("%d", &num);
		if (num == password)
		{
			printf("登陆成功!!!\n");
			break;

		}
		else
		{
			printf("登陆失败!!!\n");
		}
	}
	system("pause");
	return 0;
}