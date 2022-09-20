#include<stdio.h>

double power(int n,int k)
{
	if (k > 0) {
		if (k != 0)
			return n * power(n, k - 1);
		else
			return 1;
	}
	if (k == 0)
		return 1;
	if (k < 0)
	{
		if (k != 0)
			return 1.0/n * power(n, k + 1);
		else
			return 1;
	}
}

int main()
{
	int n = 10;
	int k = 3;
	printf("%lf",power(10, -3));
}
