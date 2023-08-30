#include "lists.h"

/**
 * free_listint - Deallocate memory for a linked list.
 * @head: A pointer to the listint_t list to be freed.
 *
 * Description: This function iteratively frees
 * the memory used by each node in the
 * linked list, including the nodes themselves.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
