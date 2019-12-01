#include<stdio.h>
#include<stdlib.h>

void exchange(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}
int main()
{
	int a = 5;
	int b = 6;
	exchange(&a, &b);
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}