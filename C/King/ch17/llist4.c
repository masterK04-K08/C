#include <stdio.h>
#include <stdlib.h>


struct node {
	int value;
	struct node *next;

};

int main(void) {
	
	// ITERATOR
	struct node *head = NULL;
	// CONSTRUCTOR
	struct node *new_node = malloc(sizeof(struct node)); //initialize
							     //pointer to struct node type

	// Set VALUE of NODE through CONSTRUCTOR
	new_node->value = 9;  // sets node.value to 9;
			      
	
	// Set node.next to point to (previous) head through CONSTRUCTOR
	new_node->next = head; // new_node->next (pointer to pointer) = ITERATOR

	// Set new NODE as head;
	head = new_node; // ITERATOR point to where new_node pointer points

	// CONSTRUCTOR create new NODE to memory
	// pointer new_node = to enough memory to store a struct node structure
	new_node = malloc(sizeof(struct node));

	new_node->value = 10; //Insert 10 to VALUE of NODE2 through CONSTRUCTOR

	// USE pointer to pointer new_node->next to set NODE2's next pointerr to previous head
	new_node->next = head;

	// SET head pointer to pointer to NODE2
	head = new_node;

	new_node = malloc(sizeof(struct node));

	new_node->value = 11;
	new_node->next = head;

	head = new_node;

	struct node *p = head;
	printf("%d\n", p->value);
	printf("%d\n", p->next->value);
	printf("%d\n", p->next->next->value);
	
	for (; p != NULL; p = p->next) 
		printf("%d\n", p->value);

	return 0;
}
