#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to the listint_t list to be set free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
