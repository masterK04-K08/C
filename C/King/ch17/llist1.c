struct node { //STRUCTURE
	int value; // VALUE
	struct node *next; // linking pointer

};

int main(void) {
	//ITERATOR
	struct node *head = NULL;
	//CONSTRUCTOR
	struct node *new_node = malloc(sizeof(struct node));

	//Alter node.value through CONSTRUCTOR pointer
	new_node->value = 9;
	//Alter node.next through CONSTRUCTOR pointer
	new_node->next = head;

	//make LAST node head;
	head = new_node;


	new_node = malloc(sizeof(struct node));
	new_node->value = 20;

	new_node->next = head;

	head = new_node;

	//insterting in the MIDDLE
	
	

	return 0;
}
