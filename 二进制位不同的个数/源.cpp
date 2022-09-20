#include<stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    int n = 0;
    int count = 0;
    scanf_s("%d %d", &n1, &n2);
    n = n1 ^ n2;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    printf("count = %d", count);

    return 0;
}