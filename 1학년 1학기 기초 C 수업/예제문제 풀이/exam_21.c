#include <stdio.h>
#include <string.h>

int main()
{
	char aa[100];
	int change = 'a' - 'A';

	printf("���� �Է�: ");
	gets(aa);
	
	for (int i = 0; i < strlen(aa); i++)
	{
		if (aa[i] >= 'A' && aa[i] <= 'Z')
			aa[i] = aa[i] + change;
		else if (aa[i] >= 'a' && aa[i] <= 'z')
			aa[i] = aa[i] - change;
	}
	
	printf("��ȯ�� ���� ==> %s", aa);

	return 0;
}