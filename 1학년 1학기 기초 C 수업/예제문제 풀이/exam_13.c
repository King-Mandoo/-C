#include <stdio.h>

int main()
{
	int a, b;
	char c;
	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
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
		printf("�ȹٷ� �Է�\n");
		break;
	}


	return 0;
}