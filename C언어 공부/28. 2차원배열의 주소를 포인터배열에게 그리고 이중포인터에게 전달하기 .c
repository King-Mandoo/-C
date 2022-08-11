#include <stdio.h>

void function(int** a, int m, int n);

int main(int argc, char** argv) 
{
	int aa[3][2] = { 1,2,3,4,5,6 };
	int* pa[3];

	for (int i = 0; i < 3; i++)    // 2차원 배열의 값을 포인터 배열에 저장
  {
		pa[i] = aa[i];       // 여기서 헷갈릴만한 것은 pa[i] = &aa[i]가 아니라 왜 pa[i] = aa[i]인가 일텐데, 그 이유는 aa[i]자체가 
  }                      // 이차원 배열이므로 주소 값을 가지기 때문이다.
                         // 실제로 printf("%d\n", aa[0]); 의 출력 값은 -821036152 으로 나온다.
    

	function(pa, 3, 2);    // 포인터배열을 인자로 전달

	return 0;
}

void function(int** a, int m, int n)     <-- ✅ Q. 여기서 들을 수 있는 의문점 아니 그러면 어처피 포인터배열을 인자로 전달해줄거면 그냥
{                                                  이차원 배열을 바로 전달해주면 안되나요??????????
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);    // 이중포인터 값 출력
		}
		printf("\n");
	}
}

 
                                  ✅ A. 네, 안돼요
                                        
                                         포인터배열이 가지는 값은 주소 값의 연속이기 때문에 이중포인터가 그 값을 대입받았을 때
                                         아무런 문제가 생기지 않지만,
                                         이차원배열 aa가 가지는 값은 연속적으로 결국엔 그 변수의 값이기 때문에
                                         이중포인터가 주소를 참조하지 못한다.
