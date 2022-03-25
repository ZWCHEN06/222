#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
int main()
{
	int a, b, c,d,max,min;
	c = 1;
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	c = max % min;
	for (; c > 0; c = max % min)
	{
		max = min;
		min = c;
	}
	printf("%d\n", min);
	d = (a * b) / min;
	printf("%d", d);
}