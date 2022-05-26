#include <stdio.h>

int main()            // 이 문제 못 푼지 삼일째..
{
	int a[10];
	int count = 10;
	int t = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		a[i] = a[i] % 42;
	}


	/*for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)    <-- 이렇게 하면 나머지가 다른 횟수가 0보다 작아지게 된다.
		{
			if (a[i] == a[j])
				count--;
		}
	}*/

	/*for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)    <-- 이렇게 하면 나머지가 다른 횟수가 10보다 커지게 된다.
		{
			if (a[i] != a[j])
				count++;
		}
	}*/

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])
			{
				t++;
				break;
			}
		}
	}

	count = count - t;

	printf("\n%d", count);

	return 0;
}

// 2022. 05. 25 3일만에 풀었다.. 이거 실화냐???????????????????????????

/*
#include <stdio.h>           <--  서로 같은 배열이 없을 때 결과에 1을 더해주는 코드  퍼옴. 이런 생각을 왜 못했찌

int main(void) {

	int input, result = 0;
	int remain[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		remain[i] = (input % 42);
	}

	for (int i = 0; i < 10; i++) {
		int count = 0; // 초기화
		for (int j = i + 1; j < 10; j++) { // 서로 같은 수일 경우
			if (remain[i] == remain[j]) count++;
		}
		if (count == 0) result++; // 같은 수가 없을 경우 개수를 세준다
	}

	printf("%d", result);
}

*/