#include <stdio.h>

int main()
{
	char num[100];
	char num2;

	printf("���ڸ� ���� �� �Է� : ");
	scanf("%s", num);

	int x_num = 0;
	int decimal_num = 0;

	num2 = num[x_num];
         
	while (num2 != '\0')
	{
		decimal_num = num2 - 48;   // num[]�� '9'����ϸ�, num[] - 48 �� 10���� 9�̴�.

		for (int j = 0; j < decimal_num; j++)
		{
			printf("*");
		}

		printf("\n");

		x_num++;
		num2 = num[x_num];
	}

	return 0;
}
