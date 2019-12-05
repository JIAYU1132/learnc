#include<stdio.h>
#include<stdlib.h>

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
char Reverse_string(char *str)
{
	if (*(str) == '\0')
	{
		return 0;
	}
	Reverse_string (str + 1);
	printf("%c ", *str);
}
int main()
{
	char arr[] = "abcde";
	Reverse_string(arr);
	system("pause");
	return 0;
}
