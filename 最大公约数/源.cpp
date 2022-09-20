#include<stdio.h>
int main()
{
	int a, b;
	int acount = -1;
	int j = 0;
	int yue[100];
	scanf_s("%d%d", &a, &b);
	
	
	for (int i = 1; i <= a; i++)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			yue[j] = i;
			j++;
			acount++;
		}
	}
	printf("%d", yue[acount]);

	return 0;
}