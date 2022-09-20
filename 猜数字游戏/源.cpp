#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("*********************************\n");
	printf("**********  1. play  ************\n");
	printf("**********  0. exit  ************\n");
	printf("*********************************\n");
}

int num()
{
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	return ret;
}
void game(int num)
{
	int input;
	printf("请猜数字\n");
	do
	{
	scanf_s("%d", &input);
		if (input < num)
		{
			printf("猜小了\n");
		}
		else if (input > num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	} while (1);
}

int main()
{
	int start;
	menu();
	int rnum = num();
	scanf_s("%d",&start);
	if (start == 1)
	{
		game(rnum);
	}
	return 0;
}