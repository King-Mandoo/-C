#include <stdio.h>

int main()
{
	char c;

	while ((c = getch()) != '.')
	{
		putchar(c);   // 왜 백스페이스나 엔터를 누르면 바로 진행이 되는 가에 대해 그건 바로 버퍼를 통해 출력하는 것이 아닌 입력받는 즉시 바로 출력을 하기 때문이다.
	}
}


----------------------------------------------------

#include <stdio.h>

int main()
{
	char c;

	while ((c = getchar()) != EOF)   // End OF Fil   ctrl + z
	{
		putchar(c);     // 문자형 c를 입력 받았다. 그런데 출력의 형태는 문자형이 아니라 문자열 형태로 나온다. 이 말은 즉슨 c 안에 그 수많은 문자들이 한꺼번에 저장이 가능하다는 건데.. 그럼 배열을 쓸 이유가 있나?
		printf("\n");  
	}
}



#include <stdio.h>
void main()
{
	char tmp;

	while ((tmp = getchar()) != '\n')
	{
		putchar(tmp);
	}

	printf("\n종료됨\n");			// 반복문 탈출
}


while문의 종료 조건을 자세히 보자. '\n' 과 비교하고 있다.

즉, \n 값이 들어오면 반복문을 종료 하라는 의미가 된다.




아래 화면에서 보면 test가 두번 찍힌 것을 알 수 있다.이유가 뭘까 ? 첫번째 test는 내가 입력하면서 적힌 내용이다.

test를 입력하고 엔터를 치면, while문의 getchar() 에 의해서 test라는 글자가 입력 버퍼로 들어감. (때문에 화면에 test가 남음)


그럼과 동시에 첫 글자인 t가 tmp에 들어가고 putchar(tmp)에서 t를 출력한다.

이게 두번째 줄의 t 이다.그리고는 다시 getchar()을 실행 하는데,

입력버퍼에 아까 입력한 값이 남아 있으므로 더 이상 값을 입력 받지 않고
est 중에서 첫번째 글자인 e 를 tmp에 저장하고 putchar(tmp)로 출력.

이를 반복해서 test 가 찍히고 마지막으로 엔터 입력으로 들어간 \n 가 빠져나오면서
조건문과 비교해 \n 이므로 탈출하게 되는 것.
출처: https://kcoder.tistory.com/43 [K_Coder(転職資料):티스토리] 


----------------------------------------------------
 
#include <stdio.h>

int main()
{
	char c;

	while (1)
	{
		c = getchar();
		printf("%d\n", c);    // 문자를 입력 받고 그대로 아스키 코드를 출력한다.
		if (c == EOF)
			break;
	}
}

----------------------------------------------------

#include <stdio.h>

int main()
{
	char c;

	while (1)
	{
		scanf("%c", &c);
		printf("%d\n", c);    // 문자를 입력 받고 그대로 아스키 코드를 출력한다.
		if (c == EOF)
			break;
	}
}
