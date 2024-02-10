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
	
	//Create new NODE
	new_node = malloc(sizeof(struct node));

	//Insert value to NODE through CONSTRUCTOR
	new_node->value = 9;

	//Link make node.next point to head so you can make new node head
	new_node->next = head;

	// Make new node head of linked list
	head = new_node;
}
