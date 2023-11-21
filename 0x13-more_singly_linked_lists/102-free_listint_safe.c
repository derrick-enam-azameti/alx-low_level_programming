#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		len++;
		free(current);

		if (next >= current)
		{
			*h = NULL;
			break;
		}

		current = next;
	}

	*h = NULL;
	return (len);
}
