#include<stdio.h>


int main() 
{
    int arr1[] = {2,34,6,4,7,47,4,7,7,3};
    int arr2[] = {134,2,42,4,34,13,41,4,1,4};
    int q = 10;
    int t = 0;
    while (q--)
    {
        printf("%d ", arr1[t]);
        t++;
    }
    printf("\n");
    t = 0;
    q = 10;
    while (q--)
    {
        printf("%d ", arr2[t]);
        t++;
    }

    for (int i = 0; i <= 9; i++)
    {
        int a = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = a;
    }

    printf("\n");
    printf("\n");
    t = 0;
    q = 10;
    while (q--)
    {
        printf("%d ", arr1[t]);
        t++;
    }
    printf("\n");
    t = 0;
    q = 10;
    while (q--)
    {
        printf("%d ", arr2[t]);
        t++;
    }
    
    return 0;
}
    