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
	printf("欢迎来到扫雷游戏!\n");
	printf("1. 开始游戏\n");
	printf("0. 结束游戏\n");
	printf("======================\n");
	printf("请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL]) {
	// 1. 先初始化 showMap, 把所有的位置都设成 *
	memset(showMap, '*', MAX_ROW * MAX_COL);
	// 2. 再初始化 mineMap, 先把里面所有的位置都设成 '0'
	//再随机找出 10 个位置设成地雷
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
	// 1. 打印最上方一行的坐标
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
		printf("请输入要翻开位置的坐标: ");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= MAX_ROW || *col < 0 || *col >= MAX_COL) {
			// 输入了非法的数据
			printf("您的输入有误!\n");
			continue;
		}
		if (showMap[*row][*col] != '*') {
			// 当前位置已经被翻开
			printf("当前位置已经翻开!\n");
			continue;
		}
		// 用户已经输入完毕, 并且校验也完毕
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
	// 记录当前翻开的格子的数量. 
	// 如果这个格子的数量已经达到了 71 个, 就说明游戏胜利
	*count += 1;	// 进入函数就应该增加 count
	if (*count == 71) {
		return 1;
	}
	return 0;
}

void Update(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL],
	int row, int col) {
	// 翻开指定位置之后要把这个位置的 * 替换成一个数字
	// 需要先统计这个位置周围 8 个格子中有几个雷
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r < 0 || r >= MAX_ROW
				|| c < 0 || c >= MAX_COL) {
				continue;
			}
			if (r == row && c == col) {
				// 当前位置不需要判定
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
	// 1. 创建两个地图, 并初始化
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	int count = 0;
	Init(showMap, mineMap);
	while (1) {
		// 2. 打印地图
		// 在测试阶段, 可以同时把地雷的布局也打出来. 发布程序的时候再去掉
		Print(mineMap);
		printf("=========================\n");
		Print(showMap);
		// 3. 提示玩家输入要翻开位置的坐标, 并校验
		int row = 0;
		int col = 0;
		Input(showMap, &row, &col);
		// 4. 检查当前位置是否是雷. 如果是, 则游戏失败
		if (CheckMine(mineMap, row, col)) {
			Print(mineMap);
			printf("你踩雷了! 游戏失败!\n");
			break;
		}
		// 5. 检查当前位置是否是最后一个位置, 如果是, 则游戏胜利
		if (CheckLastBlank(&count)) {
			printf("恭喜你, 扫雷成功!\n");
			break;
		}
		// 6. 更新翻开的当前位置, 把 * 替换成一个数字
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
			printf("您的输入有误!\n");
		}
	}
	system("pause");
	return 0;
}