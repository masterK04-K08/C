#include <stdio.h>

struct node {
	int x;
	struct node *next;
};

int main(void) {

	// three POINTERS
	// (type = struct node*) (type = struct node*) head ITERATOR keeps track PREVENTS memory leaks
	// (type = struct node*) new_node CONSTRUCTOR
	// (type = struct node**) new_node->next

	//ITERATOR
	struct node* head = NULL;
	//CONSTRUCTOR
	struct node* new_node = malloc(sizeof(struct node));

	//Change VALUE of STRUCTURE through CONSTRUCTOR
	new_node->x = 10;
	
	//Manipulate pointer of STRUCTURE through CONSTRUCTOR
	new_node->next = head;

	//Change head of list to LAST INSERTED NODE
	head = new_node;	


}
