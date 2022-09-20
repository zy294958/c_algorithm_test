#include<stdio.h>
int main()
{
	int month, days, preferential;
	double value, money;
	scanf_s("%lf%d%d%d",&value,&month,&days,&preferential);
	if (month == 11 && days == 11)
	{
		if (preferential == 1)
			money = value * 0.7 - 50;
		else
			money = value * 0.7;

		if (money < 0)
			money = 0;
	}
	else if (month == 12 && days == 12)
	{
		if (preferential == 1)
			money = value * 0.8 - 50;
		else
			money = value * 0.8;

		if (money < 0)
			money = 0;
	}
	else
	{
		if (preferential == 1)
			money = value - 50;
		else
			money = value;

		if (money < 0)
			money = 0;
	}
	printf("%.2lf",money);
}