#include <stdio.h>

int main()
{
	float a, b, result;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%f", &a);
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
	scanf("%f", &b);

	result = a + b;
	printf("%.2f + %.2f = %.2f\n", a, b, result);

	result = a - b;
	printf("%.2f - %.2f = %.2f\n", a, b, result);

	result = a * b;
	printf("%.2f * %.2f = %.2f\n", a, b, result);

	result = a / b;
	printf("%.2f / %.2f = %.2f\n", a, b, result);

	result = (int)a % (int)b;
	printf("%d %% %d = %d", (int)a, (int)b, (int)result);    // �� result�� int������ ��������ȯ�� ������ϴ°���?

	return 0;
}

/*
		int i = 2, j = 3, k = 4;
		float result2;

		result2 = i * j / (float) k;
		print("%d * %d / %d = %f", i, j, k, result2);
*/