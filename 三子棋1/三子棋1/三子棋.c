#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
void Menu()
{
	printf("==============================================\n");
	printf("             欢迎来到三子棋游戏\n");
	printf("==============================================\n");
	printf("              请输入您的选择:\n");
	printf("==============================================\n");
	printf("       1.开始游戏            2.结束游戏\n");
	printf("==============================================\n");

}
void Init(char ChessBoard[MAX_ROW][MAX_COL])
{
	for (int i = 0; i < MAX_ROW; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			ChessBoard[i][j] = ' ';
		}
	}
	srand((unsigned int)time(0));
}
void Print(char ChessBoard[MAX_ROW][MAX_COL])
{
	printf("+---+---+---+\n");
	for (int i = 0; i < MAX_ROW; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			printf("| %c ", ChessBoard[i][j]);
		}
		printf("|\n+---+---+---+\n");
	}

}
void PlayerDo(char ChessBoard[MAX_ROW][MAX_COL])
{
	while (1)
	{
		printf("您的回合\n");
		printf("请输入你想放置旗子的坐标  \n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (ChessBoard[row][col] != ' ')
		{
			printf("该位置已经有子了,请重新输入:  \n");
			continue;
		}

		if (row < MAX_ROW && row >= 0 && col >= 0 && col < MAX_COL)
		{
			ChessBoard[row][col] = 'X';
			break;
		}
		else
		{
			printf("您的输入有误,请重新输入:   \n");
			continue;
		}
		


	}
}

void ComputerDo(char ChessBoard[MAX_ROW][MAX_COL])
{
	while (1)
	{
		printf("电脑回合!\n");
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (ChessBoard[row][col] != ' ')
		{
			continue;
		}
		if (row < MAX_ROW && row >= 0 && col >= 0 && col < MAX_COL)
		{
			ChessBoard[row][col] = 'O';
			break;
		}
		else
		{
			continue;
		}
	}
}
int  IsFull(char ChessBoard[MAX_ROW][MAX_COL])
{

	for (int i = 0; i < MAX_ROW; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			if (ChessBoard[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;

}
Judge(char ChessBoard[MAX_ROW][MAX_COL])
{
	//检查行
	for (int i = 0; i < MAX_ROW; i++)
	{
		if (ChessBoard[i][0] != ' '
			&& ChessBoard[i][0] == ChessBoard[i][1]
			&& ChessBoard[i][0] == ChessBoard[i][2])
		{
			return ChessBoard[i][0];
		}
	}
	//检查列
	for (int j = 0; j < MAX_COL; j++)
	{
		if (ChessBoard[0][j] != ' '
			&& ChessBoard[0][j] == ChessBoard[1][j]
			&& ChessBoard[0][j] == ChessBoard[2][j])
		{
			return ChessBoard[0][j];
		}
	}
	//检查对角线
	if (ChessBoard[0][0] != ' '
		&& ChessBoard[0][0] == ChessBoard[1][1]
		&& ChessBoard[0][0] == ChessBoard[2][2])
	{
		return ChessBoard[0][0];
	}
	if (ChessBoard[0][2] != ' '
		&& ChessBoard[0][2] == ChessBoard[1][1]
		&& ChessBoard[0][2] == ChessBoard[2][0])
	{
		return ChessBoard[0][2];
	}
	//判断是否平局
	if (IsFull(ChessBoard))
	{
		return 'Q';
	}
	return ' ';
}
void Game()
{
	char over = ' ';
	//1.初始化一个棋盘
	char ChessBoard[MAX_ROW][MAX_COL];
	Init(ChessBoard);


	while (1)
	{
		//显示棋盘
		Print(ChessBoard);
		//玩家落子
		PlayerDo(ChessBoard);
		//显示棋盘
		Print(ChessBoard);
		//判断游戏是否结束
		over = Judge(ChessBoard);
		if (over != ' ')
		{
			break;
		}
		//电脑落子
		ComputerDo(ChessBoard);
		//判断游戏是否结束
		over = Judge(ChessBoard);
		if (over != ' ')
		{
			break;
		}
	}
	if (over == 'X')
	{
		printf("恭喜您,您赢了!!!\n");
	}
	else if (over == 'O')
	{
		printf("你太菜了,电脑都下不过!!!\n");
	}
	else
	{
		printf("你太菜了,电脑都能平局!!!\n");
	}

}
int main()
{
	Menu();
	int n = 0;
	scanf("%d", &n);
	if (n == 1)
	{
		Game();
	}
	else
	{
		printf("byebye!!!");
	}
	system("pause");
	return 0;
}