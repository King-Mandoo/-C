#include <stdio.h>
#include <string.h>

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
	
	return 0;
}
