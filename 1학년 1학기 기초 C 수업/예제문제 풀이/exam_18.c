#include <stdio.h>

int main()
{
	char str[101];
	printf("���ڿ��� �Է�(100�� �̳�) : ");
	scanf("%s", str);
	
	int i = 0;
	int big = 0, small = 0, num = 0;

	while (i <= 100)
	{
		if (str[i] >= 65 && str[i] <= 90)  // 65 < str < 90      >>  'A' < str < 'Z'
		{
			big++;
		}
		else if (str[i] >= 97 && str[i] <= 122) // 97 < str < 122  >> 'a' < str < 'z'
		{
			small++;
		}
		else if (str[i] >= 48 && str[i] <= 57) // 48 < str < 57   >>  '0' < str < '9'
		{
			num++;
		}
	
		i++;
	}

	printf("�빮�� %d��, �ҹ��� %d��, ���� %d��", big, small, num);

	return 0;
}