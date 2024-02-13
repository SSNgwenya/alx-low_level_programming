#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at
 * given position
 * @h: head of list
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *x;
	dlistint_t *a;
	unsigned int i;

	x = NULL;
	if (idx == 0)
		x = add_dnodeint(h, n);
	else
	{
		a = *h;
		i = 1;
		if (a != NULL)
			while (a->prev != NULL)
				a = a->prev;
		while (a != NULL)
		{
			if (i == idx)
			{
				if (a->next == NULL)
					x = add_dnodeint_end(h, n);
				else
				{
					x = malloc(sizeof(dlistint_t));
					if (x != NULL)
					{
						x->n = n;
						x->next = a->next;
						x->prev = a;
						a->next->prev = x;
						a->next = x;
					}
				}
				break;
			}
			a = a->next;
			i++;
		}
	}
	return (x);
}
