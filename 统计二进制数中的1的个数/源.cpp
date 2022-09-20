#include <stdio.h>

int find_1(int n)
{
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((n >> i) & 1) == 1)
        {
            count++; 
        }
    }
    return count;
}

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int ret = find_1(n);
    printf("%d\n", ret);

    return 0;
}
