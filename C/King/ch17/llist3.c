struct node {
	int value;
	struct node *next;

};

int main(void) {

	//ITERATOR
	struct node *head;
	head = NULL;

	//CONSTRUCTOR
	struct node *new_node;
	new_node = malloc(sizeof(struct node));

	//Insert VALUE of NODE through CONSTRUCTOR
	new_node->value = 9;
	//Link node.next to head so you can make new node head
	new_node->next = head;

	// Make new node head of linked list
	head = new_node;	

}
