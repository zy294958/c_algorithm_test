#include<stdio.h>
int main()
{
    int n, m, i, j;
    int sum = 0;
    int a[10][10] = { 0 };
    scanf_s("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf_s("%d ", &a[i][j]);
            if (a[i][j] >= 0)
                sum += a[i][j];

        }
    }
    printf("%d\n", sum);
}