#include <stdio.h>

int main()
{
	char str[10] = "";
	printf("문자열을 입력 ==> ");
	scanf("%s", str);
	printf("\t");

	for (int i = 9; i >= 0; i--)
	{
		printf("%c", str[i]);  
	}

	return 0;
}

// int i = 10;
// char str[i]; 는 왜 안되는지 알아보기     ps. 근데 왜 for문 안에서는 str[i]가 될까???