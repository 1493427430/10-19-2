#include<stdio.h>
int main()
{
	int a, b, c, d, e, x;
	printf("�����룻");
	scanf("%d", &a);
	b = a / 100;
	c = a - b * 100;
	d = c / 10;
	e = c - d * 10;
	e = e * 100;
	d = d * 10;
	x = e + b + d;
	printf("���Ϊ:%d", x);
	return 0;
}