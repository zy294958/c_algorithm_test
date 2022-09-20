#include <stdio.h>
#include<assert.h>



size_t my_strlen(const char* str) //使用const让目标字符串内容不可变吧，增加程序健壮性
{
	assert(str);              //此处加上断言，如若str是空指针，则直接停止程序，并打印错误信息
	const char* star = str;
	const char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - star;
}

int main()
{
	printf("%u", my_strlen("adfsdf"));
	return 0;
}

