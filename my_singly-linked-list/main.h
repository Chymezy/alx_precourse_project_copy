#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * list_s - list of integer data
 * @data: integer to be added
 * @next: contain address of next list
 */
typedef struct list_s
{
	int data;
	struct list_s *next;
} info_t;

info_t *create_node(int data);
void beginning_node(info_t **head, int data);
int print_list(info_t **head);
void add_node_anywhere(info_t **head, int data, int position);
void free_singly_linked_list(info_t **head);
#endif /*MAIN_H*/
