#include <stdio.h>
#include <stdlib.h>

struct node {

	int value;
	struct node *next;

};

int main(void) {

	struct node *head = NULL;
	struct node *tail = NULL;

	struct node *new = malloc(sizeof(struct node));
	(*new).value = 11;
	(*new).next = head;
	head = new;

	new = malloc(sizeof(struct node));

	new->value = 10;
	new->next = head;
	head = new;

	struct node *p = head;
	
	for(; p; p = p->next)
		printf("%d\n", (*p).value);



	return 0;
}
