#include<stdio.h>
int  main()
{
	int a;
	scanf_s("%d", &a);
	printf("%d%d%d%d",a%10,a%100/10,a%1000/100,a/1000);
	return 0;
}