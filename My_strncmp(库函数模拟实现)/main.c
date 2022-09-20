#include<stdio.h>
#include<assert.h>

int My_strncmp(const char* str1, const char* str2, size_t num)
{
	while (num--)
	{
		if (*str1 == *str2)
		{
			if (str1 == '\0')
			{
				return 0;
			}
			str1++;
			str2++;
		}
		else
		{
			return *str1 - *str2;
		}
		
	}
	return 0;

}

int main()
{
	char arr[] = "abcd";
	char arr2[] = "abdc";
	printf("%d", My_strncmp(arr, arr2, 3));
}