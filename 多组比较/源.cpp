#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    while (scanf("%d %d", &a, &b) != EOF)
    {

        if (a == b)
        {
            printf("%d=%d\n", a, b);
        }
        else if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else
            printf("%d<%d\n", a, b);
    }

    return 0;
}

