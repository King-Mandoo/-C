#include <stdio.h>
                         //배열의 크기는 변수로 지정할 수 없다
int main()
{
	int* arr[4];                // arr[0], arr[1], arr[2], arr[3] 각각 포인터 변수처럼 취급        
	int aa[3] = { 1,2,3 };
	int bb[5] = { 0 };
	int cc[6] = { 15,74,34,73 };
	int dd = 5434;

	arr[0] = aa;                  // arr[0] 은 aa를 가리킴
	arr[1] = bb;
	arr[2] = cc;
	arr[3] = &dd;                 // arr[3]은 dd의 주소 값을 가리킴

	for (int i = 0; i < 3; i++)
		printf("%d ", arr[0][i]);           // 1 2 3 출력

	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[1][i]);          // 0 0 0 0 0 출력

	printf("\n");

	for (int i = 0; i < 6; i++)
		printf("%d ", arr[2][i]);           // 15 74 34 73 0 0 출력 
 
	printf("\n");

	printf("%d", *arr[3]);              // 5434 출력


	return 0;
}

--------------------------
  
#include <stdio.h>
                         //배열의 크기는 변수로 지정할 수 없다
int main()
{
	int (*arr)[4];                 // 배열 포인터 선언
	int aa[3] = { 1,2,3 };
	int bb[5] = { 0 };
	int cc[6] = { 15,74,34,73 };
	int dd = 5434;

	arr = aa;                     // arr에 aa 대입

	for (int i = 0; i < 3; i++)
		printf("%d ", arr[0][i]);

	printf("\n");

	arr = bb;

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[0][i]);

	printf("\n");

	arr = cc;

	for (int i = 0; i < 6; i++)
		printf("%d ", arr[0][i]);

	printf("\n");

	arr = &dd;                   // arr에 &dd 대입

	printf("%d", *arr[0]);


	return 0;
}


--------------
  
#include <stdio.h>
                         //배열의 크기는 변수로 지정할 수 없다
int main()
{
	char* arr[2];
	char aa[6] = "Hello";
	char bb[4] = "ABC";

	arr[0] = aa;
	arr[1] = bb;

	printf("%s\n%s", arr[0], arr[1]);

	return 0;
}
