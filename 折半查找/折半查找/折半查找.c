#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = 0;
	int left = 0;
	int right = sizeof(a) / sizeof(a[0]) - 1;
	printf("������Ҫ���ҵ�����:\n");
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
			printf("�������±�Ϊ: %d\n", mid);
			break;
		}
	}
		return -1;
	system("pause");
	return 0;

}