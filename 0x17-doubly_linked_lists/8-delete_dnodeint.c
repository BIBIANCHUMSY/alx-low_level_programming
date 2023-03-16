#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index index
 * @head: pointer to the list head
 * @idx: index where the node to be deleted
 *
 * Return: 1 (Success) or -1 (fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t;

	t = *head;
	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		if (t == NULL)
			return (-1);
		t = t->next;
		index--;
	}
	if (t == *head)
	{
		*head = t->next;
		if (*head == NULL)
			(*head)->prev = NULL;
	}
	else
	{
		t->prev->next = t->next;
		if (t->next != NULL)
			t->next->prev = t->prev;
	}

	free(t);
	return (1);
}
