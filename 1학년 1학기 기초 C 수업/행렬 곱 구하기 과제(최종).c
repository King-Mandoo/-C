
// 2288065 선태욱 과제

#include<stdio.h>

void mat(int matrix[10][10], int row, int col)   // 행렬을 입력 받는 함수
{
	for (int i = 0; i < row; i++)
	{
		if (i == 0)
		{
			printf("Type the 1st row: ");
		}
		else if (i == 1)
		{
			printf("Type the 2nd row: ");
		}
		else if (i == 2)
		{
			printf("Type the 3rd row: ");
		}
		else
		{
			printf("Type the %dth row: ", i + 1);
		}

		for (int j = 0; j < col; j++)
		{
			scanf("%d, ", &matrix[i][j]);
		}
	}
	printf("\n");
}

int main()
{
	int matrix1[10][10];
	int row1, col1;

	int matrix2[10][10];
	int row2, col2;

	printf("Type the dimension of the first matrix: ");
	scanf("%d %d", &row1, &col1);
	printf("\n");

	mat(matrix1, row1, col1);                // 함수 호출

	printf("Type the dimension of the second matrix: ");
	scanf("%d %d", &row2, &col2);

	while (1)      // 첫 번째 행렬의 열과 두 번째 행렬의 행이 다르면 오류를 전하는 while 문
	{
		if (col1 != row2)
		{
			printf("Row number does not match!\n");
			printf("Re-type the dimension of the second matrix: ");
			scanf("%d %d", &row2, &col2);
		}
		else
			break;
	}
	printf("\n");

	mat(matrix2, row2, col2);                // 함수 호출

	printf("\n");
	int sum;

	printf("The result is \n\n");

	for (int i = 0; i < row1; i++)               // 행렬의 곱을 계산하는 for 문
	{
		for (int j = 0; j < col2; j++)
		{
			sum = 0;
			for (int k = 0; k < row2; k++)
			{
				sum = sum + (matrix1[i][k] * matrix2[k][j]);
			}
			printf("%3d ", sum);
		}
		printf("\n");
	}

	return 0;
}
