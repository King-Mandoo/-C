#include <stdio.h>

int main()
{
	int a, b;
	char op;;

	printf("ù ��° ����� �� ==> ");
	scanf("%d", &a);
	printf("+ - * / ==> ");
	scanf(" %c", &op);    // �ѹ� ����ִ� �� ��������
	printf("�� ��° ����� �� ==> ");
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
			printf("0���� ������ �ȵ˴ϴ�.");
		}
		else
		{
			printf("%d", a / b);
		}
	}
	
	return 0;
}