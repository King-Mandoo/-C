#include <stdio.h>

int main(void)
{
	int a, b;
	char op;
	int result;

	printf("첫번째 수를 입력하세요 : ");
	scanf("%d", &a);
	printf("계산할 연산자를 입력허세요 : ");
	scanf(" %c", &op);
	printf("두번째 수를 입력하세요 : ");
	scanf("%d", &b);

	if (op == '+')
	{
		result = a + b;
		printf("%d + %d = %d 입니다.", a, b, result);
	}
	else if(op == '-')
	{
		result = a - b;
		printf("%d - %d = %d 입니다.", a, b, result);
	}
	else if (op == '*')
	{
		result = a * b;
		printf("%d * %d = %d 입니다.", a, b, result);
	}
	else if (op == '/')
	{
		result = (float)a / b;
		printf("%d / %d = %f 입니다.", a, b, (float)result); // 여기에 대한 고민 필요.
	}
	else if (op == '%')
	{
		result = a % b;
		printf("%d %% %d = %d 입니다.", a, b, result);
	}
	else
	{
		printf("제대로된 연산자 입력");
	}

	return 0;
}