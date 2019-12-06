#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[] = "abcde";
	int i = 0;
	int count = 0;
	while(arr[i] != '\0')
	{
		count++;
		i++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}