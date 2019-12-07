#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int mul = 1;
	for (int i = 1; i <= n; i++)
	{
		mul *= i;
	}
	return mul;
}
int main()
{
	//n!=n*(n-1)*(n-2)
	int n = 5;
	printf("%d\n", fun(n));
	system("pause");
	return 0;
}