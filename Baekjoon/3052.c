#include <stdio.h>

int main()            // �� ���� �� Ǭ�� ����°..
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
		for (int j = i + 1; j < 10; j++)    <-- �̷��� �ϸ� �������� �ٸ� Ƚ���� 0���� �۾����� �ȴ�.
		{
			if (a[i] == a[j])
				count--;
		}
	}*/

	/*for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)    <-- �̷��� �ϸ� �������� �ٸ� Ƚ���� 10���� Ŀ���� �ȴ�.
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

// 2022. 05. 25 3�ϸ��� Ǯ����.. �̰� ��ȭ��???????????????????????????

/*
#include <stdio.h>           <--  ���� ���� �迭�� ���� �� ����� 1�� �����ִ� �ڵ�  �ۿ�. �̷� ������ �� ������

int main(void) {

	int input, result = 0;
	int remain[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		remain[i] = (input % 42);
	}

	for (int i = 0; i < 10; i++) {
		int count = 0; // �ʱ�ȭ
		for (int j = i + 1; j < 10; j++) { // ���� ���� ���� ���
			if (remain[i] == remain[j]) count++;
		}
		if (count == 0) result++; // ���� ���� ���� ��� ������ ���ش�
	}

	printf("%d", result);
}

*/