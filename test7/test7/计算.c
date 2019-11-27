#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ
int main()
{
	double sum = 0.0;
	for (int i = 1; i <= 100; i++)
	{
		sum += (pow(-1.0, i+1)*1/i);

	}
	printf("%f\n", sum);
	system("pause");
	return 0;
}