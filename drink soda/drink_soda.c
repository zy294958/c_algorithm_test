#include<stdio.h>
//����ˮ:
//1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
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
