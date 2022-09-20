#include<stdio.h>


void reverse_string(char* arr)
{
	if (*arr != '\0')
	{
		reverse_string(arr+1);
		printf("%c ", *arr);
	}
	
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);

}