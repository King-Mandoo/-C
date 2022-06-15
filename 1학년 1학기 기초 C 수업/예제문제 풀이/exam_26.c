#include <stdio.h>

int main()
{
	int* p;
	int aa[10] = { 1,0,3,2,5,4,7,6,9,8 };
	p = aa;
	int num;

	for (int i = 0; i < 10; i++)
		printf("%2d", aa[i]);

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			if (*(p + i) > *(p + j))
			{
				num = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = num;
			}
		}
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
		printf("%2d", aa[i]);


	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	int aa[10] = { 1,0,3,2,5,4,7,6,9,8 };
//	int temp;
//	int* p;
//	p = aa;
//	
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = i; j < 9; j++)
//		{
//			if (*(p + i) < *(p + (j + 1)));
//			else {
//				temp = *(p + i);
//				*(p + i) = *(p + (j + 1));
//				*(p + (j + 1)) = temp;
//			}
//		}
//	}
//
//	//for (int i = 0; i < 9; i++)
//	//{
//	//	for (int j = i; j < 9; j++)
//	//	{
//	//		if (aa[i] < aa[j + 1]);
//	//		else
//	//		{
//	//			temp = aa[i];
//	//			aa[i] = aa[j + 1];
//	//			aa[j + 1] = temp;
//	//		}
//	//	}
//	//}
//
//	for (int i = 0; i < 10; i++)
//		printf("%d\n", aa[i]);
//
//	return 0;
//}