#include<stdio.h>
int main()
{
    int arr[7] = { 0 };
    int sum = 0;
    while (scanf_s("%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 6 - i; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    int s = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = s;
                }
            }
        }

        //for (int i = 0; i < 7; i++)
        //{
        //    printf("%d ", arr[i]);
        //}

        for (int i = 1; i < 6; i++)
        {
            sum += arr[i];
        }
        printf("%.2lf\n", sum / 5.0);
        sum = 0;
    }
    return 0;
}