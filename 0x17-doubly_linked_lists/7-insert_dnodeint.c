#include "lists.h"

/**
 * insert_dnodeint_at_index - func that inserts a new node at a given position
 * @h: pointer to the list head
 * @idx: index where the new node inserted
 * @n: value of the new node
 *
 * Return: pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t, *new_node;

	t = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);

		idx--;
	}
	if (t->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = t;
	new_node->next = t->next;
	t->next->prev = new_node;
	t->next = new_node;

	return (new_node);
}
