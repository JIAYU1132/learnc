//编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (isalpha(ch))//判断是否为字母
		{
			putchar(ch ^ 32);//转换大小写
		}
		else if (isdigit(ch))//判断是否为数字
		{
			//do nothing
		}
		else
		{
			putchar(ch);
		}
	}

	system("pause");
	return 0;
}