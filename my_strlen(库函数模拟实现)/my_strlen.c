#include <stdio.h>
#include<assert.h>



size_t my_strlen(const char* str) //ʹ��const��Ŀ���ַ������ݲ��ɱ�ɣ����ӳ���׳��
{
	assert(str);              //�˴����϶��ԣ�����str�ǿ�ָ�룬��ֱ��ֹͣ���򣬲���ӡ������Ϣ
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

