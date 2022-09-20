#include<stdio.h>
//描述
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字
// 比如1461 可以拆分成（1和461）, （14和61）, （146和1), 
// 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//
//例如：
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//求出 5位数中的所有 Lily Number。
//
//输入描述：
//无
//输出描述：
//一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
int main()
{
	for (int i = 1; i <= 99999; i++)
	{
		int sum = 0;
		int k = 1;          //数字i的位数
		int n = 10;
		while (i / n != 0)
		{
			k++;
			n = n * 10;
		}
		if (k == 1)
		{
			sum = i;
		}
		else
		{
			n = 10;
			while (k - 1)
			{
				int infront_num = i / n;
				int behind_num = i - infront_num*n;
				sum += infront_num * behind_num;

				n *= 10;
				k--;
			}
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}