#include <stdio.h>

int main()
{
	int a, b, c, d, sum;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &c);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &d);

	sum = a + b + c + d;
	printf("%d + %d + %d + %d = %d", a, b, c, d, sum);

	return 0;
}