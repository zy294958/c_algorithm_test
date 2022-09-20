#include<stdio.h>
#include<assert.h>


char* my_strcat(char* dest, const char* source)
{
	assert(dest);
	assert(source);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr[10] = "abc";
	char arr1[] = "def";
	printf("%s", my_strcat(arr, arr1));
	return 0;

}