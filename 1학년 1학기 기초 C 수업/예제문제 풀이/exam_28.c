#include <stdio.h>
#include <string.h>

char capital(char* a, int c);
char small(char* b, int c);

void main()
{
	char aa[100];
	int change = 'a' - 'A';

	printf("문자열을 입력<100자 이내> : ");
	gets(aa);

	printf("변환된 결과 ==> ");
	for (int i = 0; i < strlen(aa); i++)
	{
		if (aa[i] >= 'A' && aa[i] <= 'Z')
			printf("%c", capital(aa[i], change));
		else if (aa[i] >= 'a' && aa[i] <= 'z')
			printf("%c", small(aa[i], change));
		else
			printf("%c", aa[i]);
	}
}

char capital(char* a, int c)
{
	return a + c;
}

char small(char* b, int c)
{
	return b - c;
}