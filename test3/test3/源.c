#include<stdio.h>
#include<stdlib.h>
int main()
{
	for (int i = 100; i <= 200; i++)//��100��200��ֵȫ������
	{
		int j = 0;
		for (j = 2; j <= i; j++)//��������1�������������������,ֱ�Ӵ�2��ʼ��Ϊ����
		{
			if (i % j == 0)//��ȡ���κ�һ����������,��֤���в��������������,ֱ���ų�,����ѭ��
			{
				break;
			}
		}
			if (i == j)
			{
				printf("%d\n", i);
			}
	}
	system("pause");
	return 0;
}