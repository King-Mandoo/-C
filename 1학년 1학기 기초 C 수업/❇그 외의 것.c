#include <stdio.h>

int main()
{
	int num = 0;
	int Sum = 0;

	printf("Enter an integer (q to quit) : ");

	while (scanf("%d", &num) == 1)                 <-- 이러한 방법으로 num의 입력 값이 정수형이면 1 이지만, 아니라면 0 이라는 것을 활용하여 코드를 짤 수 있다.
	{                                                  1은 참, 0은 거짓
		Sum = Sum + num;

		printf("Enter next integer (q to quit) : ");
	}
	printf("Sum = %d", Sum);

	return 0;
}

---------------------------------------------------------------------------

#include <stdio.h>

int main()
{
	int i = 1;
	int k = 1;

	while (++i < 2)               <-- i에 1이 더해진 뒤, '<' 가 인식되므로 조건식이 성립되지 않아 아래의 printf 함수가 실행되지 않는다.
	{
		printf("hi\n");
	}

	while (k++ < 2)               <-- '<' 가 인식된 후에 ++가 적용되므로 아래의 printf 함수가 한번 실행 된다.
	{
		printf("hi\n");
	}

	return 0;
}


-------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
	int i;

	do
	{
		printf("Enter secret code : ");
		scanf("%d", &i);
	} while (i != 337);
	printf("Good!");
	
--------------------------------------------------------------

	//printf("Enter secret code : ");
	//scanf("%d", &i);

	//while (i != 337)
	//{
	//	printf("Enter secret code : ");
	//	scanf("%d", &i);
	//}
	//printf("Good!");

	return 0;
}					// 같은 기능을 하는 코드가 여러번 반복하지 않도록 하기!

----------------------------------------------------------------------------------------

#include <stdio.h>
#define number 10       // define 을 활용하여 배열의 크기를 손 쉽게 변경 가능!
 
int main()
{
	int num[number];
	int sum = 0;
	printf("Enter 5 Numbers: ");

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &num[i]);

		sum = sum + num[i];
	}
	printf("Sum = %d", sum);

	
	return 0;
}					

---------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int i;
    scanf("%c", &i);    // i는 4바이트이다. 문자형은 1바이트이다. 정수형 i에 문자 'A'를 입력받았다.
    printf("%c\n", i);  // %c는 문자형 형변환자이므로, i의 첫 번째 바이트를 차지하는 A를 출력한다.
    printf("%d\n", i);  // %d는 정수형 형변환자이므로, 정수형 변수인 i가 할당하는 모든 메모리를 내보낸다.
                        // 따라서 첫 번쨰 바이트의 A와 그 뒤의 나머지 3개의 바이트에 담겨 있는 쓰레기 값들이 합해지기 때문에 이상한 값이 출력된다.

    // C언어는 효율성을 매우 따지기 때문에 그다지 융통성을 발휘해주지 않는다.
    // 변수 i는 정수형이다. 정수형 int와 문자형 char의 크기는 다르기 때문에 scanf에서 서로 바꿔가며 사용할 수 없다.

    return 0;
}

출력결과: 
		A
		A
		-858993599

-----------------------------------------------------------------------------------

#include <stdio.h>

void func1(int a)
{
	printf("%d", a);
}

int func2()
{
	printf("int 형 함수에서 돌려준 값 ==> ");

	return 100;
}

int main()
{
	int a, b;

	func1(func2());

	return 0;
}

------------------------------------------------------------
	
#include <stdio.h>

void helloString(char s1[10])    // 반환값 없음, char 포인터 매개변수 한 개 지정
{
    printf("%s\n", s1);
    scanf("%s", s1);    // 문자열 s1에 값 저장
}

int main()
{
    char s1[10] = "world!";    // 배열 형태의 문자열

    helloString(s1);    // 함수를 호출할 때 배열 전달

    printf("바뀐 : %s", s1);
  
    return 0;
}

------------------------------------------------------------
	
#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums)
{
	for (int i = 0; i < 6; i++)
	{
		printf("번호 입력 : ");
		scanf("%d", lotto_nums + i);

		for (int j = 0; j < i; j++)
		{
			if (*(lotto_nums + i) == *(lotto_nums + j))
			{
				printf("같은 번호가 있습니다!\n번호 입력 : ");
				scanf("%d", lotto_nums + i);
			}
		}

	}
}

void print_nums(int* lotto_nums)
{
	printf("로또 번호 :");
	for (int i = 0; i < 6; i++)
		printf("%3d", *(lotto_nums + i));
}

---------------------------------------------------------------
#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;
	int count2 = 0, num = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
		{
			if (count > count2)
				num = count;
			else
				num = count2;

			count2 = count;
			
			count = 0;
		}
		else
			count++;
	}

	printf("가장 긴 단어의 길이: %d", num);

	return 0;
}
