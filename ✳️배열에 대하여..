숫자 하나 -> 1
숫자의 배열 -> 0 1 2 3 4 5
문자 하나 -> 'a'
문자의 배열 -> 'a' 'b' 'c' '\0'


#include <stdio.h>

int main(void)

{
	char fruit_name;

	printf("What is your favorite fruit?\n");

	scanf("%c", &fruit_name);     <-- "apple" 이라고 입력

	printf("You like %c\n", fruit_name);     <--  'a' 으로 출력

	return 0;
}


왜 나는 'apple'이라고 입력을 했지만, 출력은 'a'로 출력이 될까?

그건 바로 fruit_name이라는 변수가 char형, 즉 1비트짜리로 문자를 하나만 담을수 있기 때문이다.

결국 데이터를 담을 공간이 부족하기 때문에 'a' 하나만 남고 나머지는 다 짤려 나간 것이다.

이럴 때 유용한 것이 바로 "배열"이다.


#include <stdio.h>

int main(void)

{
	char fruit_name[40];   <--  40가지의 배열, 이 자체가 주소

	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name);   <--  형 변환자가 %s로 바뀌고 &를 안붙혀줌

	printf("You like %s\n", fruit_name);  <-- 형 변환자를 %s로 변경

	return 0;
}


이게 도대체 무슨 소리일까?

'a' 'p' 'l' 'l' 'e'

- 실제 변경은 정수로 변경

65 


#include <stdio.h>

int main(void)

{
	int a = 1;
	int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };  // 40바이트의 메모리 공간을 가져옴 (int 하나당 4바이트)

	printf("%d %d %d \n", int_arr[0], int_arr[1], int_arr[9]);

	// print("%d", int_arr[20]);

	char c = 'a';
	char str1[10] = "Hello";
	char str2[10] = { 'H', 'i' };

	printf("%c\n", c);
	printf("%s", str1);
	printf("%s\n", str2);

	char str3[20] = "Hello !\0World"; // ! 이후로는 출력이 안됨.
	printf("%s\n", str3);
	printf("%c\n", str3[8]); // 실제로는 저장이 되어있음
	printf("%c\n", str3[9]);
	printf("%c\n", str3[10]);
	printf("%c\n", str3[11]);
	printf("%c\n", str3[12]);
}

// ctrl + k + c  --> 한 줄 주석 적용
// ctrl + k + u  --> 한 줄 주석 해제

/*
		문자열의 마지막에는 널문자 \0
*/
