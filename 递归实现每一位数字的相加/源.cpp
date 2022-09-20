#include<stdio.h>
int DigitSum(int n)
{
	if (n / 10 != 0)
		return n % 10 + DigitSum(n / 10);
	else
		return n;
}

int main()
{
	int n = 1729;
	printf("%d",DigitSum(n));
	return 0;
}