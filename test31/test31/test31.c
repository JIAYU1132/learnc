//写一个函数返回参数二进制中 1 的个数
//例如： 15    0000 1111    4 个 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value){
	int count = 0;
	int i = 32;
	while (i){
		if (value & 1 == 1){
			count++;
		}
			value = value >> 1;
			i--;
		
	}
	return count;
}
int main(){
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret = count_one_bits(num);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
