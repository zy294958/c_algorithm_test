#include<stdio.h>
#include<assert.h>

char* My_strncat(char* distination,const char* source,size_t num)
{
	assert(distination);
	assert(source);
	char* ret = distination;
	while (*distination != '\0')
	{
		distination++;
	}
	while (num--)
	{
		if (*source != '\0')
		{
			*distination++ = *source++;
		}
		else
		{
			*distination++ = '\0';
		}
	}
	return ret;
}

int main()
{
	char arr[12] = "abcdefg";
	char arr1[] = "hi";
	printf("%s", My_strncat(arr, arr1, 5));
}