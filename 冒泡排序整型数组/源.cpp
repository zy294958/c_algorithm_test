#include<stdio.h>
int main()
{
	int arr[] = { 234,2,5,252,5,6,83586,5,4,5,2,5,25,2 };
	int i = 0;
	int j = 0; 
	int q = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = i + 1; j < sz; j++)
		{
			if (arr[i] > arr[j])
			{
				q = arr[i];
				arr[i] = arr[j];
				arr[j] = q;
			}
		}
	}

	while (sz--) 
	{
		printf("%d ", arr[sz]);
	}

}