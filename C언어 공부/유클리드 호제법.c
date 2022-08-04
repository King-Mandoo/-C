#include <stdio.h>

int Euclidean_algorithm(int N, int n);

int main()
{
	int N, n;
	int greatest_common_factor = 0;
	printf("N과 n의 최대공약수를 구하시오.\nN과 n값 입력 : ");
	
	scanf("%d %d", &N, &n);

	greatest_common_factor = Euclidean_algorithm(N, n);

	printf("최대공약수 : %d\n", greatest_common_factor);

	return 0;
}

int Euclidean_algorithm(int N, int n)
{
	int num = 1;

	while (1)
	{
		num = N % n;
		if (num == 0)
			break;
		N = n;
		n = num;
	}

	return n;
}

