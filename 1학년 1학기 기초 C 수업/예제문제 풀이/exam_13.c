#include <stdio.h>

int main()
{
	int a, b;
	char c;
	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &c, &b);

	switch (c)
	{
	case '+':
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %.3f\n", a, b, (float)a / b);
		break;
	case '%':
		printf("%d %% %d = %d\n", a, b, a % b);
		break;
	default:
		printf("똑바로 입력\n");
		break;
	}


	return 0;
}