#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning
 * of dlistint_t list
 * @head: head of list
 * @n: value of element
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *i;

	x = malloc(sizeof(dlistint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->prev = NULL;
	i = *head;

	if (i != NULL)
	{
		while (i->prev != NULL)
			i = i->prev;
	}

	x->next = i;

	if (i != NULL)
		i->prev = x;

	*head = x;

	return (x);
}
