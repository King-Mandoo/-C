2022. 05. 19.

🟡 함수의 이해

🟠 함수의 개념

  -->  함수(function)는 무엇을 넣으면 어떤 것을 돌려주는 요술 상자이다.
       
       C 에서는 유용한 함수를 자체적으로 제공하기도 하지만 사용자가 직접 만들어서 사용하기도 한다.
       
       printf(), scanf() 함수는 C 에서 자체적으로 제공하는 함수이다.


#include<stdio.h>

int coffee_machine(int button)               <-- 사용자가 만든 함수
{
	printf("\n#1. (자동으로) 뜨거운 물을 준비한다.\n");
	printf("\n#2. (자동으로) 종이컵을 준비한다.\n");

	switch (button)
	{
	case 1: printf("#3. (자동으로 블랙커피를 탄다\n"); break;
	case 2: printf("#3. (자동으로 설탕커피를 탄다\n"); break;
	case 3: printf("#3. (자동으로 밀크커피를 탄다\n"); break;
	default: printf("#3. (자동으로 보통커피를 탄다\n"); break;
	}

	printf("#4. (자동으로) 물을 붓는다\n");
	printf("#5. (자동으로) 스푼으로 저어서 녹인다\n\n");

	return 0;
}

int main()
{
	int coffee, ret;

	printf("어떤 커피를 드릴까요? (1: 블랙, 2: 설탕, 3: 밀크)  :  ");
	scanf("%d", &coffee);

	ret = coffee_machine(coffee);         <-- 함수 호출

	printf("커피 나왔습니다.\n\n");

	return 0;
}


🟠 함수의 모양과 활용

#include<stdio.h>

int plus(int v1, int v2)   
{
	int result;
	result = v1 + v2;

	return result;         <-- plus() 함수를 호출한 곳에 result 값을 반환한다.
}

int main()
{
	int hap;                <-- hap 과 plus() 함수의 데이터 형식이 같아야 한다. plus(100, 200)의 결과를 hap에 넣어야 하기 때문이다.

	hap = plus(100, 200);      <-- 매개변수 2개를 지정하여 plus() 함수를 호출하고 반환값은 hap에 저장한다.

	printf("%d", hap);

	return 0;
}

             🎈🎈 C 프로그램은 무조건 main() 함수 부분부터 실행한다.
