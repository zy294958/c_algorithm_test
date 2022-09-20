#include<stdio.h>
int main()
{
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d",&num[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (num[i + 1] > num[0])
		{
			int a = num[0];
			num[0] = num[i + 1];
			num[i + 1] = a;
		}
	}
	printf("%d",num[0]);
}