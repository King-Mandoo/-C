#include <stdio.h>

int main()
{
	int d1, d2, d3;              // dice1, dice2, dice3
	scanf("%d %d %d", &d1, &d2, &d3);

	if (d1 == d2 && d1 == d3 && d2 == d3)   // �ֻ��� 3���� �� ���� ���
	{
		printf("%d", 10000 + d1 * 1000);
	}
	else if ((d1 == d2 && d2 != d3) || (d2 == d3 && d3 != d1) || (d1 == d3 && d2 != d3)) // �ֻ��� 2���� ���� ���
	{
		if (d1 == d2)  // d1�� d2�� ���� ���
		{
			printf("%d", 1000 + d1 * 100);
		}
		else if (d1 == d3)  // d1�� d3�� ���� ���
		{
			printf("%d", 1000 + d1 * 100);
		}
		else // d2�� d3�� ���� ���
		{
			printf("%d", 1000 + d3 * 100);
		}
	}
	else // �ֻ��� 3���� �� �ٸ� ���
	{
		if ((d1 > d2 && d2 > d3) || (d1 > d3 && d3 > d2)) // d1�� ���� Ŭ ���
		{
			printf("%d", d1 * 100);
		}
		else if ((d2 > d1 && d1 > d3) || (d2 > d3 && d3 > d1)) //d2�� ���� Ŭ ���
		{
			printf("%d", d2 * 100);
		}
		else  // d3�� ���� Ŭ ���
		{
			printf("%d", d3 * 100);
		}
	}
	return 0;
}
