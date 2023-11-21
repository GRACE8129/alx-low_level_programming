#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to the pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *store;

	current = *head;

	if (head == NULL || *head == NULL)
		return;

	while (current != NULL)
	{
		store = current->next;
		free(current);
		current = store;
	}
	*head = NULL;
}
