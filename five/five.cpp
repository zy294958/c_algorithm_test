#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a % 5 == 0)
		printf("YES");
	else
		printf("NO");
	return 0;

}