#include <stdio.h>

void good(char **q)
{
	*q = "Hello, World!";
}

int main()
{
	char* p;

	good(&p);

	printf("%s\n", p);

	return 0;
}

----
  
#include <stdio.h>

void good(char *q)
{
	printf("q: %p\n", q);    // 당연히 지금까지는 q는 &p를 담고 있다.

	printf("&q: %p\n", &q);  // &q는 그냥 별개로 자신의 주소 값.

	q = "Hello, World!";  //  이렇게 q에 "Hello, Wordl!"를 넣어주면 문자열은 주소 그 자체이므로 새로운 주소가 대입되는 것 뿐이다.

}

int main()
{
	char* p;

	good(&p);

	printf("&p: %p\n", &p);  // &p는 자신의 주소를 가지고 있다. 그리고 q와 같을 것이다.

	//printf("%s\n", p);   현재 p에는 아무런 값도 들어가 있지 않다. 따라서 출력이 되지 않는다.

	return 0;
}

---------------
  
#include <stdio.h>

void good(char *q)
{
	*q = 'c';
}

int main()
{
	char* p;

	good(&p);

	printf("%c\n", p);          // 포인터 q에 p의 주소값을 넘겨서, *q에 'c'를 넣어줬다.
	                            // 하지만 p또한 포인터 형식이므로 *q에 값을 넣었다는 것은 *p가 아닌 주소값이 담겨야할 p에 들어갔다는 뜻이다.
	printf("%c\n", *p);         // 결국 *p는 아무것도 가리키지 않고, 주소값을 담아야할 p에 'c'가 담긴 것이다. 
	                            // 이는 포인터 변수 p에 모순을 초래한다.
	return 0;
}
