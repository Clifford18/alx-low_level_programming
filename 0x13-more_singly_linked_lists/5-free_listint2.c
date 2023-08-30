#include "lists.h"

/**
 * free_listint2 - Deallocate memory for a linked list
 * and set the head to NULL.
 * @head: A pointer to a pointer to the listint_t list to be freed.
 *
 * Description: This function iteratively frees
 * the memory used by each node in the
 * linked list, including the nodes
 * themselves. It also sets the head pointer to NULL
 * to ensure that the list is empty.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
