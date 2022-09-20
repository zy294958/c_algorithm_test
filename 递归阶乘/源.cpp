#include<stdio.h>
int jiecheng(int n)
{
	if (n > 1)
		return n * jiecheng(n - 1);
	else
		return 1;

}

int main() 
{
	int a;
	scanf_s("%d",&a);
	printf("%d",jiecheng(a));
}