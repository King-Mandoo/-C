#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count;

	printf("�Է��� ������? : ");
	scanf("%d", &count);

	int* p;
	int hap = 0;
	int hap2 = 0;

	p = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++)
	{
		printf("%d��° ���� : ", i + 1);
		scanf("%d", p + i);

		if (p == NULL)
			break;

		if (*(p + i) % 2 == 0)
		{
			hap = hap + p[i];
			hap2 = hap2 + *(p + i);
		}
	}

	printf("%d\n%d", hap, hap2);

	free(p);

	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p;
//	int num, hap = 0;
//
//	printf("�Է��� ������ ? ");
//	scanf("%d", &num);
//
//	p = (int*)malloc(sizeof(int) * num);
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ��° ���� : ", i + 1);
//		scanf("%d", (p + i));
//
//		if (*(p + i) % 2 == 0)
//			hap = hap + *(p + i);
//	}
//
//	printf("�Է��� ¦���� : %d", hap);
//
//	free(p);
//
//	return 0;
//}