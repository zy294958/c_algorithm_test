#include <stdio.h>
#include <assert.h>

int my_strcmp(const char* s1, const char* s2)
{
	assert(s1);
	assert(s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;

}

int main()
{
	char arr[] = "abc";
	char arr1[] = "abd";
	if (my_strcmp(arr, arr1) < 0)
	{
		printf("arr<arr1");
	}
}