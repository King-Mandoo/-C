      
                          😃 우선 구조체 포인터를 정리하기 전에 주석을 보면서 내가 헷갈렸던 부분을 봐보자.

#include <stdio.h>
#include <string.h>

struct books
{
	char name[30];
	char author[30];
	int borrowed;
};

int main()
{
	//struct books Boo;
	//printf("%p\n", Boo.name);           Boo.name은 배열이기 때문에 그 자체가 포인터 상수
	//printf("%p\n", &Boo.name);      
	//printf("%p\n", Boo.author);         위와 동일
	//printf("%p\n", &Boo.author);
	//printf("%d\n", Boo.borrowed);       Boo.borrowed는 정수값이기 때문에 주소 값이 따로 있음
	//printf("%d\n", &Boo.borrowed);

	struct books Books[3] = { 0 };
	
	for (int i = 0; i < 3; i++)
	{
		printf("책 등록: 제목, 저자 입력 : ");
		scanf("%s %s", Books[i].name, Books[i].author);  //	scanf("%s %s", &Books[i].name, &Books[i].author); 이것도 작동되는 이유는? name과 author 자체가 포인터 상수임
		Books[i].borrowed = 0;
	}

	printf("---------------------------------------------\n");

	for (int i = 0; i < 3; i++)
	{
		printf("책 제목 : %s\n", Books[i].name);
		printf("책 저자 : %s\n", Books[i].author);
		
		if (Books[i].borrowed == 0)
		{
			printf("대출여부 : 가능\n");
		}
		else
		{
			printf("대출여부 : 불가능\n");
		}
		printf("---------------------------------------------\n");
	}

	return 0;
}

--------------------------------------------------------------------------------------
   
             구조체 포인터다.
   
  
#include <stdio.h>

struct test
{
	int a, b;
};

int main()
{
	struct test st;
	struct test* ptr;   // struct test 는 int와 같은 자료형이라고 생각하면 된다. (ㄹㅇ이렇게 생각하면 쉽다)

	ptr = &st;

	(*ptr).a = 1;
  ptr->a = 5;        // 위와 동일
  
	(*ptr).b = 2;
	ptr->b = 3;        // 위와 동일

	printf("%d\n%d\n", (*ptr).a, (*ptr).b);

	return 0;
}


 
