#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��������Ϸ
int Hint()
{
	printf("=================================================\n");
	printf("��ӭ������������Ϸ,��Ϸ����:��100���ڵ�һ������\n");
	printf("=================================================\n");
	printf("1����ʼ��Ϸ              0���˳���Ϸ\n");
    printf("=================================================\n");
	printf("����������ѡ�� \n");
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
		printf("���������µ�����:\n");
		scanf("%d", &num);
		if (num > Ans)
		{
			printf("�´���,��С������\n");
		}
		else if (num < Ans)
		{
			printf("��С��,����Ĳ�\n");

		}
		else
		{
			printf("�����,�¶���,��ϧû�ǳ�\n");
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
			printf("��Ϸ�˳�\n");
			break;
		}
		else
		{
			printf("�����������󣡣�����\n");
		}
	}
	system("pause");
	return 0;
}