//��ȡһ���������������������е�ż��λ������λ��
//Ҫ�󣺷ֱ��ӡ�����������С�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;
	int num = 0;
	scanf("%d", &num);
	//1111 0000 1111
	for (i = 31; i >= 0; i -= 2){
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2){
		printf("%d ", (num >> i) & 1);
	}
	system("pause");
	return 0;
}