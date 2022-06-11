#include <stdio.h>

int main()
{
	float a, b, result;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf("%f", &a);
	printf("두번째 계산할 값을 입력하세요 ==> ");
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
	printf("%d %% %d = %d", (int)a, (int)b, (int)result);    // 왜 result를 int형으로 강제형변환을 해줘야하는거지?

	return 0;
}

/*
		int i = 2, j = 3, k = 4;
		float result2;

		result2 = i * j / (float) k;
		print("%d * %d / %d = %f", i, j, k, result2);
*/