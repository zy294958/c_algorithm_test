#include<stdio.h>
#include<assert.h>

char* My_strncpy(char* distination, const char* source,size_t num)
{
	assert(distination);
	assert(source);
	char* ret = distination;
	while (num--)
	{
		if (*source != '\0')
		{
			*distination++ = *source++;
		}
		else
		{
			*distination++ = '\0';
			source++;
		}
	}
	return ret;

}

int main()
{
	char arr[] = "abcdefg";
	char arr1[] = "hi";
	printf("%s", My_strncpy(arr, arr1, 4));
}