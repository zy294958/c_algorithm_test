#include<stdio.h>
int main()
{
	int a = 19;
	int b = 23;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("b=%d a=%d",b,a);
	return 0;
}