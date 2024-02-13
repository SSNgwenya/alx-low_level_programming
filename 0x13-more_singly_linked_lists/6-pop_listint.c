#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *a;
	listint_t *i;

	if (*head == NULL)
		return (0);

	i = *head;

	x = i->n;

	a = i->next;

	free(i);

	*head = a;

	return (x);
}
