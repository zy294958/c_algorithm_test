#include<stdio.h>
//����
//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ���������
// ����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), 
// ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//
//���磺
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//��� 5λ���е����� Lily Number��
//
//����������
//��
//���������
//һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�
int main()
{
	for (int i = 1; i <= 99999; i++)
	{
		int sum = 0;
		int k = 1;          //����i��λ��
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