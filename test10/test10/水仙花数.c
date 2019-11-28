#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身
int main()
{
	int i, x, y, z;
	printf("水仙花数为\n");
	for (i = 100; i < 1000; i++)
	{
		x = i / 100;//百位
		y = i / 10 - x * 10;//十位
		z = i % 10;//个位
		if (i == pow(x, 3) + pow(y, 3) + pow(z, 3))
		{
			printf("%d\n", i);	
		}
	}
	system("pause");
	return 0;
}