#include <stdio.h>

int main()
{
	int a[3] = { 1,2,3 };            // 1차원 배열 a

	int* p;      // 포인터 p
	int** pp;    // 이중포인터 pp
	int* pa[3];    // 포인터배열 pa

	p = a;                    // 포인터 p는 a의 주소 값을 값으로 가지고 그 주소값이 가리키는 값을 출력
	printf("%d\n", p[0]); 
	printf("%d\n", p[1]);
	printf("%d\n", p[2]);


	pa[0] = a;            // 포인터배열 pa는 배열 a의 값(주소)을 가지고 a[0]이 가지는 값을 출력
	pa[1] = a + 1;
	pa[2] = a + 2;
	printf("%d\n", *pa[0]);
	printf("%d\n", *pa[1]);
	printf("%d\n", *pa[2]);

	
	pp = pa;                  // pp에 포인터배열 pa을 대입. 
	printf("%d\n", *pp[0]);
	printf("%d\n", *pp[1]);
	printf("%d\n\n\n", *pp[2]);

	// 이를 통해 우리는 포인터배열과 이중포인터가 상호작용이 가능하다는 것을 알 수 있다.
	// 사실 자세히 들여다보면 당연한 이치이다.
	// 포인터배열은 각각의 포인터배열의 값을 변수의 주소로 가지게 되고,
	// 포인터배열을 출력함으로써 우리는 그 주소가 가리키는 변수의 값을 알 수 있기 때문이다.

	// 이중포인터가 이러한 메커니즘을 활용하여 이중포인터에 포인터 배열을 넣어줄 수가 있다.
	// 변수를 선언하고, 변수의 주소를 담고 있는 값의 포인터를 이중포인터에 넣어주면
	// 이중포인터는 어느 변수를 가리키는 포인터의 주소를 담고 있다가
	// 출력할 때 포인터의 주소를 통해 포인터의 값을 찾고, 그 값은 변수의 주소이므로 또 다시 그 주소의 값을 찾아낸다.
	// 따라서 여기서의 포인터는 각각의 포인터배열이랑 다를바가 없기에
	// 이중포인터와 포인터배열은 서로 상호작용이 가능한 것이다.

	int value = 1000;
	int* pointer = &value;
	int** double_pointer = &pointer;

	printf("변수 value의 주소값: %p\n", &value);
	printf("포인터 변수 pointer의 값, 변수 value의 주소 값: %p\n", pointer);
	printf("포인터 변수 pointer의 주소 값: %p\n", &pointer);
	printf("double_pointer가 담고 있는 pointer의 주소 값: %p\n", double_pointer);
	printf("pointer변수가 담고 있는 value의 주소값이 출력됨: %p\n", *double_pointer);
	printf("이중포인터 double_pointer가 담고 있는 value의 값: %d\n", **double_pointer);

	printf("-------------------------------------------------------------\n\n\n");

	int aa[3][3] = { 4,5,6,7,8,9,10,11,12 };    // 2차원 배열 aa
	int(*ppa)[3];  // 배열포인터 ppa

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", aa[i][j]);    // 2차원 배열 값 출력
		}
	}

	ppa = aa;     // 배열포인터 ppa에 2차원 배열 aa 대입

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", ppa[i][j]);   
		}
	}
	
	return 0;
}
