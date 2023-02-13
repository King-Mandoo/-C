🎈🎈 홍정모 따베씨 부록 강의 공부

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TSIZE 45

struct movie
{
	char title[TSIZE];
	float rating;
	struct movie* next;
};

typedef struct movie* p_movie;

void print_all(p_movie head)
{
	printf("-------------------------------\n");
	printf("Head address = %zd\n", (size_t)head);
	p_movie search = head;
	while (search != NULL)
	{
		printf("%zd \" %s \" %f %zd\n", (size_t)search, search->title, search->rating, (size_t)search->next);
		search = search->next;
	}
}

int main()
{
	p_movie head = NULL;

	p_movie new_node = malloc(sizeof(struct movie));
	if (new_node == NULL)
	{
		printf("ERROR: malloc failed.");
		exit(1);
	}
	strcpy(new_node->title, "Avatar");
	new_node->rating = 9.5f;
	new_node->next = NULL;

	if (head == NULL)
		head = new_node; 

	print_all(head);

	/* Second node */
	new_node = malloc(sizeof(struct movie));
	if (new_node == NULL)
	{
		printf("ERROR: malloc failed.");
		exit(1);
	}
	strcpy(new_node->title, "Aladdin");
	new_node->rating = 8.0f;
	new_node->next = NULL;

	/* Add front */
	p_movie temp = head;
	head = new_node;
	new_node->next = temp;

	print_all(head);

	/* Third node */
	new_node = malloc(sizeof(struct movie));
	if (new_node == NULL)
	{
		printf("ERROR: malloc failed.");
		exit(1);
	}
	strcpy(new_node->title, "Wonder Woman");
	new_node->rating = 5.3f;
	new_node->next = NULL;

	/* Add back */
	// 1. find last node
	p_movie search = head;
	while (search->next != NULL)
	{
		search = search->next;
	}
	// 2. link
	search->next = new_node;

	print_all(head);

	/* Find and delete an item */
	search = head;
	p_movie prev = NULL;

	int count = 0;
	while (search != NULL)
	{
		if (strcmp(search->title, "Aladdin") == 0) break;

		prev = search;
		search = search->next;
		count++;
	}

	if (search == NULL)
	{
		printf("Wrong title\n");
		return;
	}
	if (prev == NULL)                      // Node1 -> Node2 -> Node3 이렇게 되어있는 구조에서
		head = search->next;           // Node2를 삭제하고 싶다면, prev는 Node1을 가리키고
	else                                   // search는 Node2를 가리키게 한다.
		prev->next = search->next;     // 그리고 prev가 NULL이 아니므로(선언 했을 당시는 NULL)
	free(search);                          // prev->next에 search->next(Node2->next)를 넣어줌으로써
			                       // Node3를 연결해준다. 그리고 search(Node2) 동적 메모리 해제

	print_all(head);
}                                    
