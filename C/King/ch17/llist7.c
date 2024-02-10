#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};
int main(void) {

	struct node *head = NULL; //use to POINT to FIRST NODE
	struct node *pPre = NULL; //use to POINT to PREVIOUS NODE
	struct node *new_node;    //CONSTRUCTOR

	//INSTER at BEGINNING
	new_node = malloc(sizeof(struct node)); //Allocates memory for a NODE (16 bytes in this example) 
	new_node->value = 9; //SET value of INSERTED NODE through CONSTRUCTOR (new_node)
	new_node->next = head; //Preserve Address of HEAD (NULL) by POINTING to it with new_node->next;
	head = new_node; //Make HEAD point to INSERTED NODE

	//INSTERT at END
	pPre = new_node; //Move pPre POINTER to next NODE
	new_node = malloc(sizeof(struct node)); //Allocate
	new_node->value = 11; //Set VALUE
	new_node->next = pPre->next; // pPre is the 'until then' LAST NODE | PRESERVE address of POINTED to by pPre->next (NULL)
	pPre->next = new_node; //POINT pPre->next to INSERTED NODE

	//MIDDLE  |  SAME CODE as INSERT END
	new_node = malloc(sizeof(struct node)); //Allocate
	new_node->value = 10; //Set VALUE of INSERTED NODE
	new_node->next = pPre->next; //PRESERVE ADDRESS POINTED to by pPre->next by pointing to it
	pPre->next = new_node; //Make pPre->next point to INSERTED NODE
	pPre = new_node; // MOVE pPre
	
	printf("%p\n", head);

	struct node *p = head;
	for(; p; p = p->next)
		printf("%d\n", p->value);
	p = NULL;


	//DELETE at BEGINNING
	printf("%p\n", head);

	struct node *tmp = head;
	head = tmp->next;

	struct node *q = head;
	for(; q; q = q->next)
		printf("%d\n", q->value);



	//DELETE at END

	return 0;
}
