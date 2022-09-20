#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = length - 1;
	int i = 0;
	scanf_s("%d", &i);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < i)
		{
			left = mid + 1;
		}
		else if (arr[mid] > i)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");

	return 0;
}