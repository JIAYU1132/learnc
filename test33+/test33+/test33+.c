#include<stdio.h>
#include<stdlib.h>
int func(int m, int n){
	int i = m^n;
	int count = 0;
	while (i){
		count++;
		i = i&(i - 1);
	}
	return count;
}
int main(){
	int m = 1999;
	int n = 2999;
	int ret = func(m, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

