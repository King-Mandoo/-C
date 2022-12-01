#include <stdio.h>

//int a;

int* pointerFunc()
{
	int a = 3;

	return &a;
}

int main()
{
	int* p = pointerFunc();

	printf("%d", *p);

	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 8);
//
//	*p = 3;
//
//	printf("%d", *p);
//
//	return 0;
//}


-----------------

#include <stdio.h>

int number = 8;
int sorted[8]; // 정렬 배열은 반드시 전역 변수로.
               // 추가적인 배열이 필요한데, 배열 본체까지 계속해서 만들면 메모리 낭비심함

void merge(int a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m; 
	
	// 작은 순서대로 배열에 삽입
	while (i <= middle && j <= n)  // i는 middle까지, j는 n까지
	{
		if (a[i] <= a[j])  // ******** 분석
		{
			sorted[k] = a[i];
			i++;
		}
		else
		{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	// 남은 데이터도 삽입
	if (i > middle)        // i가 middle보다 크다는 건 왼쪽 정렬이 비었다는 뜻
	{
		for (int t = j; t <= n; t++)  // 따라서 오른쪽 정렬에 남아있는 값을 삽입
		{
			sorted[k] = a[t];
			k++;
		}
	}
	else
	{
		for (int t = i; t <= middle; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}

	// 정렬된 데이터 삽입
	for (int t = m; t <= n; t++)
	{
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n) // 배열을 분할하는 과정은 제귀함수로 구현
{
	// 크기가 1보다 큰 경우
	if (m < n)
	{
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);   // 만약 크기가 1보다 작아지면 함수가 종료되면서 정렬
	}
}

int main()
{
	int array[8] = { 7,6,5,8,3,5,9,1 };

	mergeSort(array, 0, number - 1);  // number == 8;

	for (int i = 0; i < number; i++)
		printf("%d ", array[i]);

	return 0;
}


https://www.tutorialspoint.com/data_structures_algorithms/merge_sort_algorithm.htm


------
	
#include <stdio.h>

int number = 8;
int sorted[8];  // 배열 sorted는 정렬하기 위해 만들어놓는 배열

void merge(int a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m; 
	
	// 작은 순서대로 배열에 삽입
	while (i <= middle && j <= n)  // i는 middle까지, j는 n까지
	{
		if (a[i] <= a[j])
		{
			sorted[k] = a[i];
			i++;
		}
		else
		{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	// 남은 데이터도 삽입
	if (i > middle)        // i가 middle보다 크다는 건 왼쪽 정렬이 비었다는 뜻
	{
		for (int t = j; t <= n; t++)  // 따라서 오른쪽 정렬에 남아있는 값을 삽입
		{
			sorted[k] = a[t];
			k++;
		}
	}
	else
	{
		for (int t = i; t <= middle; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}

	// 정렬된 데이터 삽입
	for (int t = m; t <= n; t++)
	{
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n) // 배열을 분할하는 과정은 제귀함수로 구현
{
	// 크기가 1보다 큰 경우
	if (m < n)
	{
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);   // 만약 크기가 1보다 작아지면 함수가 종료되면서 정렬
	}
}

int main()
{
	int array[8] = { 14, 33, 27, 10, 35, 19, 42, 44 };

	mergeSort(array, 0, number - 1);  // number == 8;

	for (int i = 0; i < number; i++)
		printf("%d ", array[i]);

	return 0;
}
