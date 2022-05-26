#include <stdio.h>

int main()
{
	int numbers[9];
	int count, max = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &numbers[i]);

		if (max < numbers[i])
		{
			max = numbers[i];
			count = i + 1;
		}
	}

	printf("%d\n", max);
	printf("%d\n", count);

	return 0;
}

