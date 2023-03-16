#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the list
 *
 * Return: number of node in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
		count++;
	}
	return (count);
}
