#include<stdio.h>
int main()
{
	char alphabet='0';
	while ((scanf_s("%c",&alphabet))!=EOF)
	{
		if ((alphabet >= 'a') && (alphabet <= 'z'))
			printf("%c\n", alphabet - 32);
		else
			printf("%c\n", alphabet + 32);
		getchar();
	}
}