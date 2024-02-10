#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;

};

int main(void) {
	
	//ITERATOR
	struct node *head;
	head = NULL;
	//
	struct node *new_node;
	new_node = malloc(sizeof(struct node));

	new_node->value = 11;

	new_node->next = head;
	head = new_node;


	new_node = malloc(sizeof(struct node));

	new_node->value = 10;

	new_node->next = head;

	head = new_node;


	new_node = malloc(sizeof(struct node));
	new_node->value = 9;
	new_node->next = head;
	head = new_node;

	struct node *p = head;

	printf("%d\n", p->value);
	printf("%d\n", p->next->value);
	printf("%d\n", p->next->next->value);
	printf("\n");

	for(; p; p = p->next)
	printf("%d\n", p->value);

	return 0;

}
