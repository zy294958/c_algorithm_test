#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abcde";
	char arr1[] = "f";
	printf("%s", strncpy(arr, arr1, 3));
	return 0;
}