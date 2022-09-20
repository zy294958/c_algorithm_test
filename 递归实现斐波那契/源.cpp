#include<stdio.h>
int Fibonacci(int n)
{
	if (n > 2)
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	else
		return 1;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d",Fibonacci(n));
	return 0;
}