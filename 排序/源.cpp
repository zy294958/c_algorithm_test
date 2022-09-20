#include<stdio.h>
int main()
{
	int num[3];
	for (int i = 0; i <= 2; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		if (num[i + 1] > num[0])
		{
			int a = num[0];
			num[0] = num[i + 1];
			num[i + 1] = a;
		}

	}
	if (num[2] > num[1])
	{
		int a = num[1];
		num[1] = num[2];
		num[2] = a;
	}
	for (int i = 0; i < 3;i++)
	{
		printf("%d ",num[i]);
	}

}