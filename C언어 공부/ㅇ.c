#include <stdio.h>
#include <string.h>

struct movieItems
{
	char name[100];
	double rate;
};

struct movieItems Movies[100]; // Movies[0].name : Sector 7, Movies[0].rate : 4.6
int itemsCount; // 텍스트 파일에 입력되어 있는 영화의 수

void PrintAllItems(); // 모든 영화를 출력해주는 함수
void PrintAnItem(); // 영화 하나 골라서 출력
void EditAnItem(); // 원하는 영화 하나 수정
void AddAnItem(); // 원하는 영화 하나 추가
void InsertAnItem(); // 영화를 추가하는데 그 위치를 내가 지정할 수 있음. 그러면 차례 또한 밀림.
void DeleteAnItem(); // 영화 하나를 삭제, 그리고 그 위치를 땡겨서 매꿔줌.
void DeleteAllItem(); // 모든 영화 삭제
void SaveFile(); // 파일에 지금의 기록을 저장
void SearchByName(); // 영화 제목으로 검색

int main()
{
	int choice = 0; // 메뉴 고르기
	char open[20];

	FILE* moviefp = fopen("movies.txt", "r");
	printf("Please input filename to read and press Enter\n>> ");

	scanf("%s", open);

	if (strcmp(open, "movies.txt") != 0)
	{
		printf("ERROR : Cannot open file\n");
		return 0;
	}
	else if (moviefp != NULL)
	{
		itemsCount = fgetc(moviefp) - '0'; // 실수형이므로 54
		printf("%c items have been read from the file.\n\n", itemsCount);
	}

	// 영화 입력----------------------- Movies[0].name : Sector 7, Movies[0].rate : 4.6 ...
	char str[100];
	int index = 0; // 영화 순서 인덱스
	for (int i = 0; i < itemsCount; i++)
	{
		fgets(str, 100, moviefp);
		fgets(str, 100, moviefp);
		if (str != "\n")
		{
			str[strlen(str) - 1] = '\0';
			strcpy(Movies[index].name, str);
			fscanf(moviefp, "%lf", &Movies[index].rate);
			index++;
		}
	}
	//----------------------------------

	do
	{
		printf("Please select an option and press Enter\n");
		printf("1. Print all items\t");
		printf("2. Print an item\n");
		printf("3. Edit an item \t");
		printf("4. Add an item\n");
		printf("5. Insert an item\t");
		printf("6. Delete an item\n");
		printf("7. Delete all items\t");
		printf("8. Save file\n");
		printf("9. Search by name\t");
		printf("10. Quit\n");
		printf(">> ");

		scanf("%d", &choice);

		if (choice == 1)
		{
			PrintAllItems(moviefp);
		}
		else if (choice == 2)
		{
			PrintAnItem();
		}
		else if (choice == 3)
		{
			EditAnItem();
		}
		else if (choice == 4)
		{
			AddAnItem();
		}
		else if (choice == 5)
		{
			InsertAnItem();
		}
		else if (choice == 6)
		{
			DeleteAnItem();
		}
		else if (choice == 7)
		{
			DeleteAllItem();
		}
		else if (choice == 8)
		{
			SaveFile();
		}
		else if (choice == 9)
		{
			SearchByName();
		}
		else if (choice == 10)
			return 0;

	} while (choice != 10);

	fclose(moviefp);

	return 0;
}

void PrintAllItems()
{
	for (int i = 0; i < itemsCount; i++)
	{
		printf("%d : \"%s\", %.1lf\n", i, Movies[i].name, Movies[i].rate);
	}
	printf("\n");
}

void PrintAnItem()
{
	int choice;
	printf("Input the index of item to print.\n>> ");
	scanf("%d", &choice);

	if (choice < 0 || choice >= itemsCount)
		printf("Invalid item.\n\n");
	else
		printf("%d : \"%s\", %.1lf\n\n", choice, Movies[choice].name, Movies[choice].rate);
}

void EditAnItem()
{
	int choice;
	printf("Input the index of item to edit.\n>> ");
	scanf("%d", &choice);

	printf("%d : \"%s\", %.1lf\n", choice, Movies[choice].name, Movies[choice].rate);

	printf("Input new title and press enter.\n>> ");
	scanf("%s", &Movies[choice].name);
	printf("Input new rating and press enter.\n>> ");
	scanf("%lf", &Movies[choice].rate);

	printf("%d : \"%s\", %.1lf\n\n", choice, Movies[choice].name, Movies[choice].rate);
}

void AddAnItem()
{
	itemsCount++;  // 총 영화 개수 증가

	printf("Input title and press enter.\n>> ");
	scanf("%s", &Movies[itemsCount - 1].name);
	printf("Input rating and press enter.\n>> ");
	scanf("%lf", &Movies[itemsCount - 1].rate);

	printf("%d : \"%s\", %.1lf\n\n", itemsCount - 1, Movies[itemsCount - 1].name, Movies[itemsCount - 1].rate);
}

void InsertAnItem()
{
	itemsCount++;
	int index;

	printf("Input the idex of item to insert.\n>> ");
	scanf("%d", &index);


	for (int i = itemsCount - 2; i >= index; i--)
	{
		strcpy(Movies[i + 1].name, Movies[i].name);
		Movies[i + 1].rate = Movies[i].rate;
	}

	printf("Input title and press enter.\n>> ");
	scanf("%s", &Movies[index].name);
	printf("Input rating and press enter.\n>> ");
	scanf("%lf", &Movies[index].rate);

	printf("%d : \"%s\", %.1lf\n\n", index, Movies[index].name, Movies[index].rate);
}

void DeleteAnItem()
{
	int index = 0;

	if (itemsCount > 0)
	{
		itemsCount--;

		printf("Input the index of item to delete.\n>> ");
		scanf("%d", &index);

		for (int i = index + 1; i <= itemsCount; i++)
		{
			strcpy(Movies[i - 1].name, Movies[i].name);
			Movies[i - 1].rate = Movies[i].rate;
		}
	}
	else  
	{
		printf("There's no movie\n\n");
	}
}

void DeleteAllItem()
{
	itemsCount = 0;
}

void SaveFile()
{
	FILE* fp = NULL;

	char title[100];
	printf("Please input file name to write and press Enter.\n>> ");
	scanf("%s", title);

	fp = fopen(title, "w");
	if (fp == NULL)
	{
		fprintf(stderr, "We can not open this file.\n\n");
		exit(1);
	}

	char moviesCount = itemsCount + '0';

	fputc(moviesCount, fp);

	for (int i = 0; i < itemsCount; i++)
	{
		fprintf(fp, "\n");
		fputs(Movies[i].name, fp);
		fprintf(fp, "\n%lf", Movies[i].rate);
	}
	
	fclose(fp);
}

void SearchByName()
{
	int i, check = -5;
	char aa[100];

	while (getchar() != '\n'); // 버퍼 비워주기 (위의 메뉴 선택 할떄 남아있는 '\n'제거)

	printf("Input title to search and press enter.\n>> ");

	fgets(aa, 100, stdin);
	aa[strlen(aa) - 1] = NULL;  // 문자열 마지막 개행문자 제거

	for (i = 0; i < itemsCount; i++)
	{
		if (strcmp(aa, Movies[i].name) == 0)
		{
			check = i;
			break;
		}
	}


	if (check != -5)
		printf("%d : \"%s\", %.1lf\n\n", i, Movies[i].name, Movies[i].rate);
	else
		printf("No movie found : %s\n\n", aa);
}
