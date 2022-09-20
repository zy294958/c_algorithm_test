#include<stdio.h>
int main()
{
	int arr[] = { 1,3,321,4,314,1433,12,412,4,12,4,13 };
	int i = 0;
	for (i; i < 12; i++)
	{
		printf("%d ",*(arr+i));
	}
	return 0;
}