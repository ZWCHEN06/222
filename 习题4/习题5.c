#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"math.h"
int main()
{
	int n, a, i = 0, sum1 = 0, sum2 = 0;
	printf("请输入数字：\n");
	scanf("%d", &a);
	printf("\n");
	printf("请输入数字的长度：\n");
	scanf("%d", &n);
	for (i = 0; i <=n-1; i++)
	{
		sum1 = a * pow(10, i) + sum1;
		sum2 = sum1 + sum2;
	}
	printf("%d", sum2);
	/*while (a <= n)
	{
		sum1 = a*pow(10, i) + sum1;
		sum2 = sum1 + sum2;
		i++;
	}
	printf("%d", sum2);*/
}