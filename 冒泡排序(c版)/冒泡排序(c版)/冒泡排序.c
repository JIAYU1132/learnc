#include<stdio.h>
#include<stdlib.h>
//��������Ԫ�رȽ�����
int main(){
	int arr[] = { 1, 9, 8, 4, 7, 6, 5 };
	int num = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i; j++){		//��Ϊjһֱ��++,��ǰ���˳���Ѿ��ź�,����jֻ��<n-i
			if (arr[j] < arr[j+1]){
				num = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = num;
			}
		}
	}
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}