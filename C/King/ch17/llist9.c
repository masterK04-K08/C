#include <stdio.h>
#include <stdlib.h>

struct node {

	int value;
	struct node *next;

};

int main(void) {

	struct node *head = NULL;
	struct node *pPre = NULL;
	struct node *new_node;

	new_node = malloc(sizeof(struct node));
	new_node->value = 9;
	new_node->next = head;
	head = new_node;

	pPre = new_node;

	new_node = malloc(sizeof(struct node));
	new_node->value = 11;
	new_node->next = pPre->next;
	pPre->next = new_node;

	new_node = malloc(sizeof(struct node));
	new_node->value = 10;
	new_node->next = pPre->next;
	pPre->next = new_node;

	pPre = new_node;

	struct node *p = head;
	for(; p; p = p->next)
		printf("%d\n", p->value);

	printf("%d\n", head->value);


	return 0;
}
