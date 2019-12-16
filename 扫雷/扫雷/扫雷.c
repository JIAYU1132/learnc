#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

int Menu() {
	printf("======================\n");
	printf("��ӭ����ɨ����Ϸ!\n");
	printf("1. ��ʼ��Ϸ\n");
	printf("0. ������Ϸ\n");
	printf("======================\n");
	printf("����������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL]) {
	// 1. �ȳ�ʼ�� showMap, �����е�λ�ö���� *
	memset(showMap, '*', MAX_ROW * MAX_COL);
	// 2. �ٳ�ʼ�� mineMap, �Ȱ��������е�λ�ö���� '0'
	//������ҳ� 10 ��λ����ɵ���
	srand((unsigned int)time(0));
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	int count = MINE_COUNT;
	while (count > 0) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		count--;
	}
}

void Print(char showMap[MAX_ROW][MAX_COL]) {
	// 1. ��ӡ���Ϸ�һ�е�����
	printf("   | ");
	for (int col = 0; col < MAX_COL; col++) {
		printf("%d ", col);
	}
	printf("\n");
	printf("---+---------------------\n");

	for (int row = 0; row < MAX_ROW; row++) {
		printf(" %d | ", row);
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", showMap[row][col]);
		}
		printf("\n");
	}
}
void Input(char showMap[MAX_ROW][MAX_COL], int* row, int* col) {
	while (1) {
		printf("������Ҫ����λ�õ�����: ");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= MAX_ROW || *col < 0 || *col >= MAX_COL) {
			// �����˷Ƿ�������
			printf("������������!\n");
			continue;
		}
		if (showMap[*row][*col] != '*') {
			// ��ǰλ���Ѿ�������
			printf("��ǰλ���Ѿ�����!\n");
			continue;
		}
		// �û��Ѿ��������, ����У��Ҳ���
		break;
	}
}

int CheckMine(char mineMap[MAX_ROW][MAX_COL],
	int row, int col) {
	if (mineMap[row][col] == '1') {
		return 1;
	}
	return 0;
}


int CheckLastBlank(int* count) {
	// ��¼��ǰ�����ĸ��ӵ�����. 
	// ���������ӵ������Ѿ��ﵽ�� 71 ��, ��˵����Ϸʤ��
	*count += 1;	// ���뺯����Ӧ������ count
	if (*count == 71) {
		return 1;
	}
	return 0;
}

void Update(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL],
	int row, int col) {
	// ����ָ��λ��֮��Ҫ�����λ�õ� * �滻��һ������
	// ��Ҫ��ͳ�����λ����Χ 8 ���������м�����
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r < 0 || r >= MAX_ROW
				|| c < 0 || c >= MAX_COL) {
				continue;
			}
			if (r == row && c == col) {
				// ��ǰλ�ò���Ҫ�ж�
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	showMap[row][col] = count + '0';
}

void Game() {
	// 1. ����������ͼ, ����ʼ��
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	int count = 0;
	Init(showMap, mineMap);
	while (1) {
		// 2. ��ӡ��ͼ
		// �ڲ��Խ׶�, ����ͬʱ�ѵ��׵Ĳ���Ҳ�����. ���������ʱ����ȥ��
		Print(mineMap);
		printf("=========================\n");
		Print(showMap);
		// 3. ��ʾ�������Ҫ����λ�õ�����, ��У��
		int row = 0;
		int col = 0;
		Input(showMap, &row, &col);
		// 4. ��鵱ǰλ���Ƿ�����. �����, ����Ϸʧ��
		if (CheckMine(mineMap, row, col)) {
			Print(mineMap);
			printf("�������! ��Ϸʧ��!\n");
			break;
		}
		// 5. ��鵱ǰλ���Ƿ������һ��λ��, �����, ����Ϸʤ��
		if (CheckLastBlank(&count)) {
			printf("��ϲ��, ɨ�׳ɹ�!\n");
			break;
		}
		// 6. ���·����ĵ�ǰλ��, �� * �滻��һ������
		Update(showMap, mineMap, row, col);
	}
}

int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}
		else {
			printf("������������!\n");
		}
	}
	system("pause");
	return 0;
}