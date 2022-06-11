#include <stdio.h>
#include <string.h>

int main()
{
	char aa[100];
	char bb[100];

	printf("문자열을 입력하세요: ");
	scanf("%s", aa);

	for (int i = 0; i < strlen(aa); i++)
	{
		bb[i] = aa[(strlen(aa) - 1) - i];
	}
	bb[strlen(aa)] = '\0';

	printf("내용을 거꾸로 출력 ==> %s", bb);


	return 0;
}