#include <stdio.h>

int main()
{
	int gugu[9][9];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			gugu[i][j] = (j + 1) * (i + 1);;
			printf(" %dX%d=%2d", j + 1, i + 1, gugu[i][j]);
		}
		printf("\n");
	}

//#include <stdio.h>
//
//int main()
//{
//	int gugu[9][9];
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			gugu[i][j] = j + 1;
//			printf("%2dX%d=%2d", gugu[i][j], i + 1, gugu[i][j] * (i + 1));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}