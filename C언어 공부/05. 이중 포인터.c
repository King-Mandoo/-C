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
