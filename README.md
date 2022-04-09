# C
1학년 1학기 / C언어
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int num_100, num_10, num_1;
	int num2_100, num2_10, num2_1;
	int mult;

	printf("변수1의 값: ");
	scanf("%d", &num1);       // 세자리 변수1의 값
	printf("변수2의 값: ");
	scanf("%d", &num2);       // 세자리 변수2의 값

	num2_1 = num2 % 10;           // 변수 2의 일의 자리수
	num2_10 = (num2 / 10) % 10;  // 변수 2의 십의 자리수 
	num2_100 = num2 / 100;      // 변수 2의 백의 자리수

	num_1 = num1 * num2_1 * 1;      // '변수1'과 '변수2의 일의 자리수'를 곱한 값
	num_10 = num1 * num2_10 * 10;   // '변수1'과 '변수2의 십의 자리수'를 곱한 값
	num_100 = num1 * num2_100 * 100;  // '변수1'과 '변수2의 백의 자리수'를 곱한 값

	printf("첫 번째 결과값: %d\n", num1 * num2_1);
	printf("두 번째 결과값: %d\n", num1 * num2_10);
	printf("세 번째 결과값: %d\n", num1 * num2_100);

	mult = num_1 + num_10 + num_100; // 변수1과 변수2를 곱한 값

	printf("결과값: %d\n", mult);

	return 0;
}
