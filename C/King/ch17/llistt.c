#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;

};

int main(void) {

	struct node *head = NULL;
	struct node *new_node = malloc(sizeof(struct node));

	new_node->value = 9;
	new_node->next = head;
	head = new_node;

	printf("%d\n", head->value);


	return 0;
}
