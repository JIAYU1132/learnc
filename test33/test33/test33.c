//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//
//�������� :
//
//1999 2299
//
//������� : 7
#include<stdio.h>
#include<stdlib.h>
int func(int m, int n){
	int count = 0;
	for (int i = 0; i < 32; i++){
		if ((m & 1) != (n & 1)){
			count++;
		}
		m = m >> 1;
		n = n >> 1;
	}
	return count;
}
int main(){
	int m = 1999;
	int n = 2999;
	int ret = 0;
	ret = func(m, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}