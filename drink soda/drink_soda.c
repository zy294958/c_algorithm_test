#include<stdio.h>
//喝汽水:
//1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
int main()
{
	int money=20;          
	int soda=money/1;
	int bottle=20;
	int sodazong=soda;
	do
	{
		bottle = bottle / 2;
		sodazong += bottle;
	} while (bottle % 2 != 1);
	sodazong += bottle / 2;
	printf("%d\n",sodazong);
	
}
