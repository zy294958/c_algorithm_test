#include<stdio.h>
int main()
{
	char a;
	while ((scanf_s("%c", &a)) != EOF)
	{
		if (((a >= 'a') && (a <= 'z')) || ((a >= 'A') && (a <= 'Z')))
			printf("%c is an alphabet.\n",a);
		else
			printf("%c is not an alphabet.\n",a);
		getchar();
	}
}