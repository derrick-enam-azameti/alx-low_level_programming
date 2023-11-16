#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *curr;
	unsigned int length = 0;

	while (str[length])
		length++;

	curr = malloc(sizeof(list_t));
	if (!curr)
		return (NULL);

	curr->str = strdup(str);
	curr->len = length;
	curr->next = (*head);
	(*head) = curr;

	return (*head);
}
