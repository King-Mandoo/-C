#include <stdio.h>

int main()
{
	int arr[2][3] = { {1,2,3}, {4,5,6} };

	printf("%d\n", sizeof(arr));        // 24
	printf("%d\n", sizeof(arr[0]));     // 12
	printf("%d\n", sizeof(arr[0][0]));  // 4

	return 0;
} 

  ---------------              여기까지는 뭐 oK

#include <stdio.h>

int main()
{
	int arr[2][3] = { {1,2,3}, {4,5,6} };

  printf("%p\n", arr);          //000000C89016F668    
	printf("%p\n", &arr);         //000000C89016F668
	printf("%p\n", &arr[0]);      //000000C89016F668
	printf("%p\n", &arr[0][0]);   //000000C89016F668

	return 0;
}                                          넷 다 동일한 주소를 가짐 
                                           여기서 포인트는 arr과 나머지가 다 동일한 주소를 가진다는 것


---------------              여기까지도 뭐 oK ~  이제는 이것을 활용하여 이차원 포인터 배열과 배열 포인터의 관계를 봐보자

#include <stdio.h>

int main()
{
	int arr[2][3] = { {1,2,3}, {4,5,6} };

	int(*ptr)[3] = arr; // &arr[0] = arr 동일

	printf("%d", ptr[0][0]);         // 1 출력
	printf("%d", ptr[0][1]);         // 2 출력
	printf("%d", ptr[0][2]);         // 3 출력

	printf("%d", ptr[1][0]);         // 4 출력
	printf("%d", ptr[1][1]);         // 5 출력
	printf("%d", ptr[1][2]);         // 6 출력             
                                   
                                                                          출처: http://pelex529.blogspot.com/2009/01/2.html

	/*
		이차원 배열을 선언을 하고, 배열을 배열포인터 안에 대입 해주면
		ptr[0][0] = arr[0][0]
		ptr[1][0] = arr[1][0]  와 같이
   
	                   배열포인터는 이차원 배열의 역할을 해준다.
	*/
	return 0;
} 
                 

                  arr[2][3] 에서 arr[0], arr[1]은 각각 int [4]의 배열명이라고 해석이 가능한가
                  
                  arr[0][2]에서 arr[0]은 배열명 [2]는 배열의 번호 이런 느낌으로
                  
(1) int a[4] ==> int *p

(2) int *a[4] ==> int **p

(3) int a[3][4] ==> int (*p)[4]

(4) int a [2][3][4] ==> int (*p)[3][4]

(5) int *(*a[3])(int) ==> int *(**p)(int)
              
