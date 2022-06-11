#include <stdio.h>

int main()
{
	int a, b;
	char op;;

	printf("첫 번째 계산할 값 ==> ");
	scanf("%d", &a);
	printf("+ - * / ==> ");
	scanf(" %c", &op);    // 한번 띄어주는 거 잊지말기
	printf("두 번째 계산할 값 ==> ");
	scanf("%d", &b);

	if (op == '+')
	{
		printf("%d", a + b);
	}
	else if (op == '-')
	{
		printf("%d", a - b);
	}
	else if (op == '*')
	{
		printf("%d", a * b);
	}
	else if (op == '/')
	{
		if (b == 0)
		{
			printf("0으로 나누면 안됩니다.");
		}
		else
		{
			printf("%d", a / b);
		}
	}
	
	return 0;
}