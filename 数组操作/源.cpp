#include<stdio.h>
void init(int* arr,int sz)
{
	int i = 0;
	while (1)
	{
		if (i ==sz )
			break;
		arr[i] = 0;
		i++;
	}
}
void print(int* arr,int sz)
{
	int i = 0;
	while (1)
	{
		if (i == sz)
			break;
		printf("%d ", arr[i]);
		i++;
	}
}
void reverse(int* arr,int sz)
{
	int left = 0;
	int right = sz - 1;	

	
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;	
		right--;	
	}

}
int main()
{
	int arr[14] = {4,14,4,5,36,3,6,4,6,3,6,5,5,6};
	init(arr,14);
	print(arr,14);
	printf("\n");
	int arr1[14] = { 1423,1234,23,4,23412,341,2412,43,41,23,234,1243,1,431 };
	reverse(arr1, 14);
	print(arr1,14);
}