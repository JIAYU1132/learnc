#include<stdio.h>
#include<stdlib.h>
//�ж�1000��-- - 2000��֮�������
int main()
{
	int age = 0;
	for (age = 1000; age <= 2000; age++)//����1000--2000��
	{
		if (age % 400 == 0)//�ܱ�400���������
		{
			printf("%d\n", age);
		}
		else if (age % 4 == 0 && age % 100 != 0)//�ܱ�4�����Ҳ��ܱ�100���������
		{
			printf("%d\n", age);
		}
	}
	system("pause");
	return 0;
}

