#include <stdio.h>

int main()
{
	int a, b;
	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	if (a == 1)
	{
		printf("값 입력 : ");
		scanf("%d", &b);
	}
	else if (a == 2)
	{
		printf("값 입력 : ");
		scanf("%X", &b);
	}
	else if (a == 3)
	{
		printf("값 입력 : ");
		scanf("%o", &b);
	}

	printf("10진수 ==> %d\n", b);
	printf("16진수 ==> %X\n", b);
	printf("8진수 ==> %o\n", b);

	return 0;
}

//#include <stdio.h>        세 번째 풀땐 이렇게 풀었다.
//
//int main()
//{
//	int a, b;
//	printf("입력진수 결정 <1>10  <2>16  <3>8 : ");
//	scanf("%d", &a);
//	printf("값 입력 : ");
//
//	if (a == 1)
//	{
//		scanf("%d", &b);
//		printf("10진수 ==> %d\n", b);
//		printf("16진수 ==> %X\n", b);
//		printf("8진수 ==> %o\n", b);
//	}
//	else if (a == 2)
//	{
//		scanf("%X", &b);
//		printf("10진수 ==> %d\n", b);
//		printf("16진수 ==> %X\n", b);
//		printf("8진수 ==> %o\n", b);
//	}
//	else if (a == 3)
//	{
//		scanf("%o", &b);
//		printf("10진수 ==> %d\n", b);
//		printf("16진수 ==> %X\n", b);
//		printf("8진수 ==> %o\n", b);
//	}
//
//	return 0;
//}