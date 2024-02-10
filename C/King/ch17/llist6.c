#include <stdio.h>
#include <stdlib.h>

struct node {
	double value;
	struct node *next;

};

int main(void) {

	//HEAD
	struct node *head = NULL;
	// CONSTRUCTOR
	struct node *new_node = malloc(sizeof(struct node));

	new_node->value = 21.1;
	new_node->next = head;

	head = new_node;



	new_node = malloc(sizeof(struct node));
	new_node->value = 11.1;
	new_node->next = head;
	head = new_node;

	new_node = malloc(sizeof(struct node));
	new_node->value = 1.1;
	new_node->next = head;
	head = new_node;
	
	struct node *p = head;

	printf("%.1f\n", p->value);
	printf("%.1f\n", p->next->value);
	printf("%.1f\n", p->next->next->value);


	for(; p != NULL; p = p->next)
		printf("%.1f\n", p->value);


	return 0;
}
