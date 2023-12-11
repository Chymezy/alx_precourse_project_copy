#include "main.h"

info_t *create_node(int data)
{
	info_t *newNode;
	newNode = malloc(sizeof(info_t));
	if (newNode == NULL)
	{
		printf("Memory Allocation Failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->data = data;
	newNode->next = NULL;
	return (newNode);
}

void beginning_node(info_t **head, int data)
{
	info_t *new_node;

	new_node = create_node(data);
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head; /* assign the address of head to new node thereby retaining the list */
		*head = new_node;
	}
}

int print_list(info_t **head)
{
	int i;
	info_t *current;

	i = 0;
	current = *head;

	while (current != NULL)
	{
		printf("node[%d] -> %d\n", i, current->data);
		current = current->next;
		i++;
	}
	return (i);
}

void add_node_anywhere(info_t **head, int data, int position)
{
	info_t *new_node, *current;
	current = *head;
	int current_position;
	/* determine number of linked list */
	new_node = create_node(data);
	current_position = 0;
	current = *head;

	if (position == 0)
		beginning_node(head, data);
	else
	{	
		while (current != NULL && current_position < position - 1)
		{
			current = current->next;
			current_position++;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}

void free_singly_linked_list(info_t **head)
{
	int i;
	info_t *current, *temp;

	if (*head == NULL)
		return;

	current = *head;
	i = 0;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
