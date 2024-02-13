#include "lists.h"

/**
 * add_dnodeint_end - add new node at end
 * of dlistint_t list
 * @head: head of list
 * @n: value of element
 * Return: new element address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *a;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = NULL;

	x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = a;
	}
	else
	{
		*head = a;
	}
	a->prev = x;

	return (a);
}
