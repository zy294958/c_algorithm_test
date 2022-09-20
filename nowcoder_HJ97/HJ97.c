#include<stdio.h>
int main()
{
    int n = 0;
    int count_fu = 0;
    double count_zh = 0;
    int temp;
    scanf_s("%d",&n);
    int sum=0;
    while (n--)
    {
        scanf_s("%d",&temp);
        if (temp < 0)
        {
            count_fu++;
        }
        if (temp > 0)
        {
            count_zh += 1.0;
            sum += temp;
        }
    }
    if (count_zh == 0)
    {
        printf("%d 0.0", count_fu);
    }
    else
    {
        printf("%d %.1lf", count_fu, sum / count_zh);
    }
    return 0;
}