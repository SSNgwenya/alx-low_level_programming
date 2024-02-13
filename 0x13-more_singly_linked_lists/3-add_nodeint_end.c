#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *a;

	(void)a;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;
	a = *head;
	if (*head == NULL)
	{
		*head = x;
	}
	else
	{
		while (a->next != NULL)
		{
			a = a->next;
		}
		a->next = x;
	}
	return (*head);
}
