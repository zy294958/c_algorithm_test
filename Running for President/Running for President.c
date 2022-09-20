#include<stdio.h>
int main()
{
    int A = 0, B = 0;
    char ch;
    while ((ch = getchar()) != '0')
    {
        if (ch == 'A')
            A++;
        else
            B++;
    }
    if (A == B)
        printf("E");
    if (A > B)
        printf("A");
    if (B > A)
        printf("B");

    return 0;

}