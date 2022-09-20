#include<stdio.h>

int Strlen(char* ch)
{
	if (*ch != '\0') {
		return 1 + Strlen(ch + 1);
	}
	return 0;
}

int main()
{
	char arr[] = "adaaasfasdfa";
	printf("%d",Strlen(arr));
	return 0;
}