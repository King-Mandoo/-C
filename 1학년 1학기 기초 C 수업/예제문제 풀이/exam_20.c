#include <stdio.h>
#include <string.h>

int main()
{
	char aa[100];
	char bb[100];

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", aa);

	for (int i = 0; i < strlen(aa); i++)
	{
		bb[i] = aa[(strlen(aa) - 1) - i];
	}
	bb[strlen(aa)] = '\0';

	printf("������ �Ųٷ� ��� ==> %s", bb);


	return 0;
}