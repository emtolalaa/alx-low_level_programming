#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: list_t list to be freed
 *
 * Return: Freed list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
