//不允许创建临时变量，交换两个整数的内容
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