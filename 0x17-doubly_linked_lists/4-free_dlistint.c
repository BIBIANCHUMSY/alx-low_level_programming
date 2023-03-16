#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the list head
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
