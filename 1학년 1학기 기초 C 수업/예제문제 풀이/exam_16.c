#include <stdio.h>

int main()
{
	char str[101] = "";
	
	printf("������ �� ���ڸ� �Է� (100�� ����) : ");
	scanf("%s", str);
	printf("\n");

	printf("�Է��� ���ڿ� ==> %s\n", str);
	printf("��ȯ�� ���ڿ� ==> ");

	for (int i = 100; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}