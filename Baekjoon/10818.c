#include <stdio.h>

int main()
{
	int aa;
	int i;
	int min = 1000000;
	int max = -1000000;

	scanf("%d", &i);

	for (int k = 0; k < i; k++)
	{
		scanf("%d", &aa);

		if (max < aa) // 0 0   0 1   1 2   2 3   3 4   4 5
		{
			max = aa;
		}

		if (min > aa)
		{
			min = aa;
		}
	}
	printf("%d %d", min, max);

	return 0;
}

/*
	#include <stdio.h>

int main()
{
	int aa[100];
	int i;
	int cmp;
	int min, max;

	scanf("%d", &i);

	for (int k = 0; k < i; k++)
	{
		scanf("%d", &aa[k]);
	}

	cmp = aa[0];

	for (int j = 0; j < i; j++)
	{
		if (cmp < aa[j]) // 0 0   0 1   1 2   2 3   3 4   4 5
		{
			cmp = aa[j];
			max = cmp;
		}

		if (cmp > aa[j])
		{
			cmp = aa[j];
			min = cmp;
		}
	}

	printf("%d %d", min, max);
	return 0;
}
*/