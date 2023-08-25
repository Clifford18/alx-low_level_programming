#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deallocates memory for a linked list.
 * @head: A pointer to the list_t list to be freed.
 *
 * Description: This function frees the
 * memory used by each node in the linked list,
 *
 * including the memory allocated for the
 * strings and the nodes themselves.
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
