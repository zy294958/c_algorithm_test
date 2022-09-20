#include<stdio.h>
#include<assert.h>


char* my_strcpy(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = { 0 };
	char arr2[] = "davadvasdv";
	printf("%s", my_strcpy(arr, arr2));
	return 0;
}