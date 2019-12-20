#include <stdio.h>
#include <stdlib.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	system("pause");
	return 0;
}