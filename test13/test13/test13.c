//��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (isalpha(ch))//�ж��Ƿ�Ϊ��ĸ
		{
			putchar(ch ^ 32);//ת����Сд
		}
		else if (isdigit(ch))//�ж��Ƿ�Ϊ����
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