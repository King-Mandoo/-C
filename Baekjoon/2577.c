#include <stdio.h>
#include <string.h>

int main()
{
	int A, B, C, pd;
	int num[10];
	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	int count = 0;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	pd = A * B * C;

	while (pd != 0)
	{
		pd = pd / 10;
		++count;
	}

	pd = A * B * C;

	for (int i = 0, k = 1; i < count && k < pd; i++, k *= 10)
	{
		num[i] = (pd / k) % 10;
	}

	for (int i = 0; i < count; i++)
	{
		if (num[i] == 0)
		{
			zero++;
		}
		else if (num[i] == 1)
		{
			one++;
		}
		else if (num[i] == 2)
		{
			two++;
		}
		else if (num[i] == 3)
		{
			three++;
		}
		else if (num[i] == 4)
		{
			four++;
		}
		else if (num[i] == 5)
		{
			five++;
		}
		else if (num[i] == 6)
		{
			six++;
		}
		else if (num[i] == 7)
		{
			seven++;
		}
		else if (num[i] == 8)
		{
			eight++;
		}
		else if (num[i] == 9)
		{
			nine++;
		}
	}
	printf("%d\n", zero);
	printf("%d\n", one);
	printf("%d\n", two);
	printf("%d\n", three);
	printf("%d\n", four);
	printf("%d\n", five);
	printf("%d\n", six);
	printf("%d\n", seven);
	printf("%d\n", eight);
	printf("%d\n", nine);

	return 0;
}


//#include <stdio.h>
//
//int main()
//{
//	int i = 9834;
//
//	printf("%d\n", 9834 % 10);
//  printf("%d\n", (9834 / 10) % 10);
//  printf("%d\n", (9834 / 100) % 10);
//  printf("%d\n", (9834 / 1000) % 10);
//
//	return 0;
//}
