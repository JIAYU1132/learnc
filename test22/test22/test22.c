#include<stdio.h>
#include<stdlib.h>

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
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
