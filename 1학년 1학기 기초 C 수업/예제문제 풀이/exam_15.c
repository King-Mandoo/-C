#include <stdio.h>

int main()
{
	for (int i = 0; i < 128; i++)
	{
		if (i % 16 == 0)
		{
			printf("_________________________\n");
			printf("10����	16����	����\n");
			printf("_________________________\n");
		}

		printf("%3d\t", i);
		printf("%3X\t", i);
		printf("%3c\t\n", i);
	}

	return 0;
}


