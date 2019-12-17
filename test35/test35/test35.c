//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	for (int i = 0; i < 10; i++){
		printf("%d ", *(p + i));
	}
	system("pause");
	return 0;
}

