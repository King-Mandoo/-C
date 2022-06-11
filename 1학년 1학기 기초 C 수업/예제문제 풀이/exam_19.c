#include <stdio.h>

int main()
{
	char num[100];
	char num2;

	printf("숫자를 여러 개 입력 : ");
	scanf("%s", num);

	int x_num = 0;
	int decimal_num = 0;

	num2 = num[x_num];
         
	while (num2 != '\0')
	{
		decimal_num = num2 - 48;   // num[]이 '9'라고하면, num[] - 48 은 10진수 9이다.

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
