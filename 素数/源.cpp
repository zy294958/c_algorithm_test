#include<stdio.h>
int main()
{

	for (int i = 100; i <= 200; i++)
	{
		for (int a = 2; a < i; a++)
		{
			if (i % a == 0)
				break;
			if (a == i - 1)
				printf("%d ",i);
		}

	}
}