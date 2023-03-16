#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: number of node in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
