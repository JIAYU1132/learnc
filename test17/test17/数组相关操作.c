#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
////����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��


int init(int arr[], int n)
{
	int i = 0;
	printf("��������Ҫ��ʼ��������Ԫ��:\n");
	for (; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("���������Ϊ:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", arr[i]);
	}
}


int empty(int arr[], int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		arr[i] = 0;
	}
	printf("���������Ϊ:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", arr[i]);
	}
}


int reverse(int arr[], int n)
{
	int i = 0;
	int temp = 0;
	for (; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	printf("���������Ϊ:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", arr[i]);
	}
}


void menu()
{
	printf("*******************************************\n");
	printf("**************1����ʼ������****************\n");
	printf("**************2���������******************\n");
	printf("**************3������Ԫ�ص�����************\n");
	printf("*******************************************\n");
}



int main()
{
	int arr[5] = { 0, 0, 0, 0, 0 };
	int choice = 0;
	int  n = 0;
	int i = 0;
	int a = 0;
	printf("������������λ����Ԫ��\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	n = sizeof(arr) / sizeof(arr[0]);

	menu();
	printf("����������ѡ��\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:init(arr, n);	 break;

	case 2:empty(arr, n);	 break;
	case 3:reverse(arr, n);  break;
	default:
		printf("������������\n");

	}
	system("pause");
	return 0;
}
