#include <stdio.h>
#include <string.h>

int main()
{
	char statement[256];
	int count = 0;

	while (1)
	{
		gets(statement);

		if (statement[0] == '#')
			break;

		for (int i = 0; i < strlen(statement); i++)
		{
			if (statement[i] == 'a' || statement[i] == 'A')
				count++;
			else if (statement[i] == 'e'|| statement[i] == 'E')
				count++;
			else if (statement[i] == 'i'|| statement[i] == 'I')
				count++;
			else if (statement[i] == 'o' || statement[i] == 'O')
				count++;
			else if (statement[i] == 'u' || statement[i] == 'U')
				count++;
		}
		printf("%d\n", count);
		count = 0;
	}
}
