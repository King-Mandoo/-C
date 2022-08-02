#include <stdio.h>

int main() {
	int a = 5;
	int* p = &a;
	int** pp = &p;   // **pp는 p의 주소가 가리키는 값을 가리킨다. *pp는 p의 값을 가리킨다.

	printf("a의 값: %d, *p의 값: %d, **pp의 값: %d\n\n", a, *p, **pp);
	printf("a의 주소값: %p, p의 값: %p, *pp의 값: %p\n\n", &a, p, *pp);
	printf("p의 주소값: %p, pp의 값: %p\n", &p, pp);
}

출력결과 :
		a의 값: 5, *p의 값: 5, **pp의 값: 5

		a의 주소값: 00000051E68FF7D4, p의 값: 00000051E68FF7D4, *pp의 값: 00000051E68FF7D4

		p의 주소값: 00000051E68FF7F8, pp의 값: 00000051E68FF7F8

------------------------
int main()
{
	int a = 5;
	int* ap = &a;
	int** app = &ap;

	printf("%d\n", a);    // a의 값 5출력
	printf("%d\n", *ap);  // a의 주소 값이 가르키는 값 5출력
	printf("%d\n", **app);  // ap의 값(변수 a의 주소)가 가르키는 a의 값 5 출력

	return 0;
}

int main()
{
	int a = 5;
	int* ap = &a;
	int* app = &ap;

	printf("%d\n", a);
	printf("%d\n", *ap);
	printf("%d\n", *app);    // 이렇게 하면 ap의 값이 출력(a의 주소)

	return 0;
}
