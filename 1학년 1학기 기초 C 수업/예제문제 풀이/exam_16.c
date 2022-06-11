#include <stdio.h>

int main()
{
	char str[101] = "";
	
	printf("영문자 및 숫자를 입력 (100자 이하) : ");
	scanf("%s", str);
	printf("\n");

	printf("입력한 문자열 ==> %s\n", str);
	printf("변환된 문자열 ==> ");

	for (int i = 100; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}