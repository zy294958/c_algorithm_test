#include "stdio.h"
#include "string.h"
int main(void)
{
    char str1[100];
    char str2[100];
    gets(str1);
    int num=strlen(str1);
    int i; 
    //printf("%d\n",num);
    for (i = 0; i < num; i++)
        str2[i] = str1[num - 1 - i];
    str2[i] = '\0';
    printf("%s", str2);
}