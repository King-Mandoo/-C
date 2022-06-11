#include <stdio.h>
#include <string.h>

int main()
{
	char aa[100];
	int change = 'a' - 'A';

	printf("문자 입력: ");
	gets(aa);
	
	for (int i = 0; i < strlen(aa); i++)
	{
		if (aa[i] >= 'A' && aa[i] <= 'Z')
			aa[i] = aa[i] + change;
		else if (aa[i] >= 'a' && aa[i] <= 'z')
			aa[i] = aa[i] - change;
	}
	
	printf("변환된 문자 ==> %s", aa);

	return 0;
}