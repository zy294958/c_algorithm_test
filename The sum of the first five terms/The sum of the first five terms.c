#include<stdio.h>
int main()
{
	int input;
	scanf_s("%d",&input);
	int sum = input;

	for (int i = 1; i <= 4; i++)
	{
		int a = input;
		int b = a;
		for (int j=1; j <= i; j++)
		{
			a *= 10;
			b +=a;
		}
		sum += b;
		
	}
	printf("%d", sum);
}