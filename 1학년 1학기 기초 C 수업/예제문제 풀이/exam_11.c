#include <stdio.h>

int main(void)
{
	int a, b;
	char op;
	int result;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("����� �����ڸ� �Է��㼼�� : ");
	scanf(" %c", &op);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf("%d", &b);

	if (op == '+')
	{
		result = a + b;
		printf("%d + %d = %d �Դϴ�.", a, b, result);
	}
	else if(op == '-')
	{
		result = a - b;
		printf("%d - %d = %d �Դϴ�.", a, b, result);
	}
	else if (op == '*')
	{
		result = a * b;
		printf("%d * %d = %d �Դϴ�.", a, b, result);
	}
	else if (op == '/')
	{
		result = (float)a / b;
		printf("%d / %d = %f �Դϴ�.", a, b, (float)result); // ���⿡ ���� ��� �ʿ�.
	}
	else if (op == '%')
	{
		result = a % b;
		printf("%d %% %d = %d �Դϴ�.", a, b, result);
	}
	else
	{
		printf("����ε� ������ �Է�");
	}

	return 0;
}