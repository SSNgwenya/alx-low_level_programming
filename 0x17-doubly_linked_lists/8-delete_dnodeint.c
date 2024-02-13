#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a
 * dlistint_t linked list
 * @head: head of list
 * @index: index of new node
 * Return: 1 if success, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x;
	dlistint_t *a;
	unsigned int i;

	x = *head;
	if (x != NULL)
		while (x->prev != NULL)
			x = x->prev;

	i = 0;
	while (x != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = x->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				a->next = x->next;

				if (x->next != NULL)
					x->next->prev = a;
			}

			free(x);
			return (1);
		}
		a = x;
		x = x->next;
		i++;
	}
	return (-1);
}
