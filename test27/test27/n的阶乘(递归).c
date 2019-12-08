#include<stdio.h>
#include<stdlib.h>
//µİ¹éÇó!n
int fun(int n)
{
	if (n == 1)
	{
		return 1;
	}
		return  n*fun(n - 1);
}
int main()
{
	int n = 5;
	printf("%d\n", fun(n));
	system("pause");
	return 0;
}