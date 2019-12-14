#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
void Menu()
{
	printf("==============================================\n");
	printf("             ��ӭ������������Ϸ\n");
	printf("==============================================\n");
	printf("              ����������ѡ��:\n");
	printf("==============================================\n");
	printf("       1.��ʼ��Ϸ            2.������Ϸ\n");
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
		printf("���Ļغ�\n");
		printf("����������������ӵ�����  \n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (ChessBoard[row][col] != ' ')
		{
			printf("��λ���Ѿ�������,����������:  \n");
			continue;
		}

		if (row < MAX_ROW && row >= 0 && col >= 0 && col < MAX_COL)
		{
			ChessBoard[row][col] = 'X';
			break;
		}
		else
		{
			printf("������������,����������:   \n");
			continue;
		}
		


	}
}

void ComputerDo(char ChessBoard[MAX_ROW][MAX_COL])
{
	while (1)
	{
		printf("���Իغ�!\n");
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
	//�����
	for (int i = 0; i < MAX_ROW; i++)
	{
		if (ChessBoard[i][0] != ' '
			&& ChessBoard[i][0] == ChessBoard[i][1]
			&& ChessBoard[i][0] == ChessBoard[i][2])
		{
			return ChessBoard[i][0];
		}
	}
	//�����
	for (int j = 0; j < MAX_COL; j++)
	{
		if (ChessBoard[0][j] != ' '
			&& ChessBoard[0][j] == ChessBoard[1][j]
			&& ChessBoard[0][j] == ChessBoard[2][j])
		{
			return ChessBoard[0][j];
		}
	}
	//���Խ���
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
	//�ж��Ƿ�ƽ��
	if (IsFull(ChessBoard))
	{
		return 'Q';
	}
	return ' ';
}
void Game()
{
	char over = ' ';
	//1.��ʼ��һ������
	char ChessBoard[MAX_ROW][MAX_COL];
	Init(ChessBoard);


	while (1)
	{
		//��ʾ����
		Print(ChessBoard);
		//�������
		PlayerDo(ChessBoard);
		//��ʾ����
		Print(ChessBoard);
		//�ж���Ϸ�Ƿ����
		over = Judge(ChessBoard);
		if (over != ' ')
		{
			break;
		}
		//��������
		ComputerDo(ChessBoard);
		//�ж���Ϸ�Ƿ����
		over = Judge(ChessBoard);
		if (over != ' ')
		{
			break;
		}
	}
	if (over == 'X')
	{
		printf("��ϲ��,��Ӯ��!!!\n");
	}
	else if (over == 'O')
	{
		printf("��̫����,���Զ��²���!!!\n");
	}
	else
	{
		printf("��̫����,���Զ���ƽ��!!!\n");
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