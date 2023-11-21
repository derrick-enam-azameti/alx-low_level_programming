#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *new = NULL;
	size_t count = 0;
	size_t current;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		new = head;
		current = 0;
		while (current < count)
		{
			if (temp == new)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			new = new->next;
			current++;
		}
		if (head == NULL)
			exit(98);
	}
	return (count);
}
