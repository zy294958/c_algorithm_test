#include<stdio.h>
int main()
{
	for (int i = 1000; i <= 2000;i++)
	{
		if ((i % 4 == 0) && (i % 100 != 0))
			printf("%d ",i);
	}
}
