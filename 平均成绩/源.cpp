#include<stdio.h>
int main() 
{
	int a, b, c, d, e;
	scanf_s("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("%.1lf", (a + b + c + d + e) / 5.0f);
	return 0;
}