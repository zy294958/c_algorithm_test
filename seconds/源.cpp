#include<stdio.h>
int main()
{
	int s;
	scanf_s("%d",&s);
	printf("%d %d %d",s/3600,s%3600/60,s%60);
}