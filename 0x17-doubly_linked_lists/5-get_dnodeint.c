#include "lists.h"

/**
 * get_dnodeint_at_index - func that returns the nth node of a linked list
 * @head: pointer to the list head
 * @index: index of the node
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
