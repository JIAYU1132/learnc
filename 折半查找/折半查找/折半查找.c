#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = 0;
	int left = 0;
	int right = sizeof(a) / sizeof(a[0]) - 1;
	printf("请输入要查找的数字:\n");
	scanf("%d", &num);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < num)
		{
			left = mid + 1;
		}
		else if (a[mid] > num)
		{
			right = mid - 1;
		}
		else
		{
			printf("该数字下标为: %d\n", mid);
			break;
		}
	}
		return -1;
	system("pause");
	return 0;

}