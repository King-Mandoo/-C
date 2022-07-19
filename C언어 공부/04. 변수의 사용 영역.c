
* 지역변수
 
   지역 변수와 자동 변수(auto variable)는 같은 용어이다.
   본래 auto 예약어와 함계 함수 안에 지역 변수를 선언한다.
   auto 예약어는 생략할 수 있으며 이 경우 함수 안에 선언된 변수는 자동으로 지역 변수가 된다.

 특징 1. 지역 변수는 사용 범위가 블록 내부로 제한되므로 다른 함수에서는 사용할 수 없다.
  
#include <stdio.h>

void assign(void);

int main()
{
	auto int a = 0;

	assign();
	printf("main 함수 a: %d\n", a);

	return 0;
}

void assign(void)
{
	int a;                              // auto 생략
	
	a = 10;
	printf("assign 함수 a: %d\n", a);
}



 특징 2. 지역 변수는 이름이 같아도 선언된 함수가 다르면 각각 독립된 저장 공간을 갖는다.
   
   --> 함수에 선언된 변수 a는 이름만 같을 뿐 메모리에 별도의 저장 공간을 갖는다.
       따라서 assign 함수가 호출된 이후에도 main 함수에 있는 a의 값은 바뀌지 않는다.
   
      주의할 점.
       ==> 지역 변수가 할당된 저장 공간은 자동으로 초기화되지 않으므로 쓰레기 값이 사용되지 않도록 주의해야 한다.
   
#include <stdio.h>

int main()
{
	int a = 3, b = 5;
   
	{
		int a = 5, b = 3;
		printf("%d %d\n", a, b);         // 5 3 출력
	}

	printf("%d %d", a, b);           // 3 5 출력

	return 0;
}

-----------------------------------------------------
  
* 전역 변수
