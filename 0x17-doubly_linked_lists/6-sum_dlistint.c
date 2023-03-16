#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of data in linkedlist
 * @head: pointer to the list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
