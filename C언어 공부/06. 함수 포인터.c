#include <stdio.h>

int func(int d, int f);

int main()
{
	int (*func_p)(int, int);  // 함수 포인터 func_p 선언

	printf("%d\n", func(5, 3));
   
	func_p = func;    // func 함수의 메모리 주소룰 func_p에 저장.

	printf("%d\n", func_p(1, 6));   // 7 출력

	return 0;
}

int func(int d, int f)  
{
	return d + f;
}


함수 포인터를 선언할 때는 함수 포인터와 저장될 함수의 반환값 자료형, 매개변수 자료형과 개수가 일치해야 한다.
  
  
#include <stdio.h>

void func()
{
	printf("Hello, this is pointer to function returning void\n");
}

int main()
{
	void (*func_p)();

	func_p = func;

	func_p();

	return 0;
}






