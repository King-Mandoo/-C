2022. 04. 13.  7주차 수업

#include <stdio.h>

int main(void)
{
	int i;
	int hab = 0;

	for (i = 3; i < 100; i = i + 3)
	{
		hab = hab + i; // 0+3  3+6  9+9  18+12    <-- 이 사고가 잘 안된다
	}
	printf("%d", hab);

	return 0;
}

----------------------------------------------------------------------

#include <stdio.h>

int main(void)
{
	int dan;
	int i;

	printf("몇 단 ? ");
	scanf("%d", &dan);

	for (i = 9; i > 0; i--)
	{
		printf("%d X %d = %d\n", dan, i, dan * i);
	}

	return 0;
}

-------------------------------------------------------------------------

🟡 중첩 for문

🟢 중첩 for문의 개념

                #include <stdio.h>

                int main(void)
                {
                  int i, k;

                  for (i = 2; i <= 9; i++)
                  {
                    for (k = 1; k <= 9; k++)
                    {
                      printf("%d \n", k);
                    }
                    printf("%d \n", i);
                  }
                  return 0;
                }
		
		
		
----------------------------------------------------------------------------------------------------------------------------------------------------------------

📌예제 문제풀이📌	


예제 14. 맞음⭕

#include <stdio.h>

int main()
{
	for (int dan = 2; dan <= 9; dan++)
	{
		printf(" #제%d단#", dan);
	}

	printf("\n\n");

	for (int num = 1; num <= 9; num++)
	{	
		for (int num2 = 2; num2 <= 9; num2++)
		{
			
			printf("%2dX%2d=%2d ", num2, num, num2 * num);
		}

		printf("\n");
	}

	return 0;
}


예제 15. 애매함❗❓

#include <stdio.h>

int main()
{
	int i;
	printf("------------------------\n");
	printf("10진수	16진수	  문자\n");
	printf("------------------------\n");

	for (i = 0; i <= 127; i++)
	{
		printf("   %d", i);
		printf("        %x", i);
		printf("      %c", i);
		printf("\n");

		if (i % 15 == 0 && i >= 15)
		{
			printf("------------------------\n");
			printf("10진수	16진수	  문자\n");
			printf("------------------------\n");
		}	
	}


	return 0;
}


🔻다른 답🔻


#include <stdio.h>

int main()
{
	int i;

	for (i = 0; i < 128; i++)
	{
		if (i % 16 == 0)
		{
			printf("_________________________\n");
			printf("10진수  16진수  문자\n");
			printf("_________________________\n");
		}
		printf("%5d %5x %5c\n", i, i, i);
	}
	return 0;
}



예제 16. 틀림❌  

🔻고친 답🔻

#include <stdio.h>

int main()
{
	char IT[101];   --->    ✅ 이건 왜 char IT[101] = ""; 이렇게 안써도 되는거지?????????????????/
	int str;

	printf("영문자 및 숫자를 입력 <100자 이하> : ");
	scanf("%s", IT);

	printf("입력한 문자열 ==> %s\n", IT);
	printf("변환된 문자열 ==> ");

	str = strlen(IT);  //  🎈🎈 strlen 함수는 문자열의 길이를 구한다. (널문자를 포함하지 않은 순수 문자열의 길이만 구한다.) 

	for (int i = str; i >= 0; i--)
	{
		printf("%c", IT[i]);
	}
	printf("\n");

	return 0;
}
