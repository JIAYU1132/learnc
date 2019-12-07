#include<stdio.h>
#include<stdlib.h>
int MyStrlen(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + MyStrlen(arr + 1);
	}
	return 0;
}
int main()
{
	char arr[] = "abcde";
	printf("%d\n", MyStrlen(arr));
	system("pause");
	return 0;
}