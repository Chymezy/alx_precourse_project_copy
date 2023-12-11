#include "main.h"

int main(void)
{
	info_t *head;
	head = NULL;

	beginning_node(&head, 12);
	beginning_node(&head, 7);
	beginning_node(&head, 24);
	beginning_node(&head, 89);

	add_node_anywhere(&head, 95, 2);
	
	printf("Before freeing list\n");
	print_list(&head);
	free_singly_linked_list(&head);
	print_list(&head);
	printf("After freeing list\n");

	return 0;
}

