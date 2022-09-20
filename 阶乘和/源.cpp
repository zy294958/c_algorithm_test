#include<stdio.h>
int main()
{
	int ret=1;
	int he=0;
	for (int i = 1; i <= 10; i++)
	{	
		ret *= i;
		he += ret; 
	}
	printf("%d",he);
}