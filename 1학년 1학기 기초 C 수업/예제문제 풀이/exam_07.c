#include <stdio.h>

int main()
{
	char str[10] = "";
	printf("���ڿ��� �Է� ==> ");
	scanf("%s", str);
	printf("\t");

	for (int i = 9; i >= 0; i--)
	{
		printf("%c", str[i]);  
	}

	return 0;
}

// int i = 10;
// char str[i]; �� �� �ȵǴ��� �˾ƺ���     ps. �ٵ� �� for�� �ȿ����� str[i]�� �ɱ�???