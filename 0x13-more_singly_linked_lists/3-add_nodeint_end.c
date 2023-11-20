#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *m;
	listint_t *p = *head;

	m = malloc(sizeof(listint_t));
	if (!m)
		return (NULL);

	m->n = n;
	m->next = NULL;

	if (*head == NULL)
	{
		*head = m;
		return (m);
	}

	while (p->next)
		p = p->next;

	p->next = m;

	return (m);
}
