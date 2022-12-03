#include <stdio.h>
#include <string.h>

int equal(struct student, struct student);
int equal2(struct student* a, struct student* b);
int equal3(struct student const* a, struct student const* b);
struct student createStudent();

struct student {
	char name[30];  // 30 + 4 + 16
	int age;
	double height;
	double weight;
}s2;

struct class {
	struct student stu;
	int classNumber;
	int studentCount;
};

struct pointer {
	int* p;
};

int main()
{

	// 구조체 초기화
	struct student classA = {"선태욱", 23, 171.3, 68.6};

	printf("%s\n", classA.name);
	printf("%d\n", classA.age);
	printf("%.1lf\n", classA.height);
	printf("%.1lf\n\n", classA.weight);

	// 구초체 값 대입
	strcpy(s2.name, "Michael");
	s2.age = 15;
	s2.height = 180.6;
	s2.weight = 73.3;

	printf("%s\n", s2.name);
	printf("%d\n", s2.age);
	printf("%.1lf\n", s2.height);
	printf("%.1lf\n\n", s2.weight);

	s2 = classA; // 대입

	printf("%s\n", s2.name);
	printf("%d\n", s2.age);
	printf("%.1lf\n", s2.height);
	printf("%.1lf\n\n", s2.weight);

	// 구조체 안의 구조체
	struct class c1 = { {"sunflower", 12, 153.6, 42.3}, 11, 31 };

	printf("%s\n", c1.stu.name);
	printf("%d\n", c1.stu.age);
	printf("%.1lf\n", c1.stu.height);
	printf("%.1lf\n", c1.stu.weight);
	printf("%.d\n", c1.classNumber);
	printf("%.d\n", c1.studentCount);

	// 구조체 배열
	struct class list[30];
	
	for (int i = 0; i < 30; i++)
	{
		list[i].classNumber = i + 1;
	}

	for (int i = 0; i < 30; i++)
	{
		printf("%d ", list[i].classNumber);
	}

	printf("\n\n");

	struct student student_list[3] = {        // 구조체 배열 초기화
		{"sun", 18, 194.6, 34.4},
		{"Tom", 15, 154.6, 54.4},
		{"mecine", 24, 165, 54.3}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", student_list[i].name);
		printf("%d\n", student_list[i].age);
		printf("%.1lf\n", student_list[i].weight);
		printf("%.1lf\n\n", student_list[i].height);
	}

	// 포인트를 멤버로 가지는 구조체
	struct pointer a;
	a.p = &classA.age;
	*a.p = 35;

	printf("%d\n", *a.p);
	printf("%d\n\n", classA.age);

	// 구조체를 가리키는 포인터
	struct student* s;
	s = &classA;

	printf("%s\n", s->name);
	printf("%s\n", (*s).name);

	printf("%d\n", s->age);
	printf("%d\n", (*s).age);

	printf("%.1lf\n", s->height);
	printf("%.1lf\n", (*s).height);

	printf("%.1lf\n", s->weight);
	printf("%.1lf\n\n", (*s).weight);

	// 구조체를 함수의 인수로 넘기는 방법
	struct student n = {"선태욱", 23, 68.3, 171.3};
	struct student m = { "이말년", 41, 70, 179.9 };

	// 값 형식으로 전달
	if (equal(n, m))
		printf("같은 나이\n");
	else
		printf("다른 나이\n");

	// 참조 형식으로 전달
	if (equal2(&n, &m))
		printf("같은 나이\n");
	else
		printf("다른 나이\n");

	// 참조 형식 하지만 상수형이므로 equal3 함수 내에서 값 변경 불가
	if (equal3(&n, &m))
		printf("같은 나이\n");
	else
		printf("다른 나이\n\n");

	// 구조체를 함수의 반환값으로 넘기기
	struct student make = createStudent();
	printf("%s\n", make.name);
	printf("%d\n", make.age);
	printf("%lf\n", make.height);
	printf("%lf\n\n", make.weight);

	return 0;
}

int equal(struct student a, struct student b)
{
	if (a.age == b.age)
		return 1;
	else
		return 0;
}

int equal2(struct student* a, struct student* b)
{
	if (a -> age == b -> age)
		return 1;
	else
		return 0;
}

int equal3(struct student const* a, struct student const* b)
{
	if (a -> age == b -> age)
		return 1;
	else
		return 0;
}

struct student createStudent()
{
	struct student a = { "하이용", 13, 53.3, 164.4 };

	return a;
}
