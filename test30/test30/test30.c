//����������ʱ������������������������
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a = 3;
	int b = 4;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d  %d\n", a, b);
	system("pause");
	return 0;
}