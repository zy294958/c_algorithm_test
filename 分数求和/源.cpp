#include<stdio.h>
int main()
{
	double sum=0.0;
	/*int flag = 1;*/
	for (int i = 1; i <= 100; i++)
	{
		/*sum += flag * 1.0 / i;
		flag = -flag;*/
		if(i%2==1)
			sum += 1.0 / i;
		if (i % 2 == 0)
			sum += -1.0 / i;
	}
	printf("%lf", sum);
}