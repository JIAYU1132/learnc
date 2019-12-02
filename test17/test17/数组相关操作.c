#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
////创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。


int init(int arr[], int n)
{
	int i = 0;
	printf("请输入您要初始化的数组元素:\n");
	for (; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("您的数组变为:\n");
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
	printf("您的数组变为:\n");
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
	printf("您的数组变为:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", arr[i]);
	}
}


void menu()
{
	printf("*******************************************\n");
	printf("**************1、初始化数组****************\n");
	printf("**************2、清空数组******************\n");
	printf("**************3、数组元素的逆置************\n");
	printf("*******************************************\n");
}



int main()
{
	int arr[5] = { 0, 0, 0, 0, 0 };
	int choice = 0;
	int  n = 0;
	int i = 0;
	int a = 0;
	printf("请输入您的五位数组元素\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	n = sizeof(arr) / sizeof(arr[0]);

	menu();
	printf("请输入您的选择\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:init(arr, n);	 break;

	case 2:empty(arr, n);	 break;
	case 3:reverse(arr, n);  break;
	default:
		printf("您的输入有误\n");

	}
	system("pause");
	return 0;
}
