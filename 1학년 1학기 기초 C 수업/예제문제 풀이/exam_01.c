#include <stdio.h>

int main()
{
	int a, b, c, d, sum;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &b);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &c);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &d);

	sum = a + b + c + d;
	printf("%d + %d + %d + %d = %d", a, b, c, d, sum);

	return 0;
}