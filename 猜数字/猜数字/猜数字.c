#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏
int Hint()
{
	printf("=================================================\n");
	printf("欢迎来到猜字谜游戏,游戏规则:猜100以内的一个数字\n");
	printf("=================================================\n");
	printf("1，开始游戏              0，退出游戏\n");
    printf("=================================================\n");
	printf("请输入您的选择： \n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;


}

void Game()
{
	int Ans = rand(time(0)) % 100 + 1;
	int num = 0;
	
	while (1)
	{
		printf("请输入您猜的数字:\n");
		scanf("%d", &num);
		if (num > Ans)
		{
			printf("猜大了,往小里试试\n");
		}
		else if (num < Ans)
		{
			printf("猜小了,往大的猜\n");

		}
		else
		{
			printf("真聪明,猜对了,可惜没糖吃\n");
			break;
		}
	}
}
int main()
{
	while (1)
	{
		int choice = Hint();
		if (choice == 1)
		{
			Game();
		}
		else if (choice == 0)
		{
			printf("游戏退出\n");
			break;
		}
		else
		{
			printf("您的输入有误！！！！\n");
		}
	}
	system("pause");
	return 0;
}