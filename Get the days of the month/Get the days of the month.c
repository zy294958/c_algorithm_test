#include<stdio.h>

int main()
{
	int monthDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int year;
	int month;
	while (scanf_s("%d %d", &year,&month)!=EOF)
	{
		if (((year % 4 == 0) && (year % 100 != 0))||(year%400==0))
		{
			printf("%d\n", monthDays[month-1]);
		}
		else
		{
			if (month == 2)
				printf("%d\n",monthDays[month-1]-1);
			else
				printf("%d\n", monthDays[month - 1]);
		}
	}
	return 0;
}