#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth
 * node of dlistint_t linked list
 * @head: head of list
 * @index: index of nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	a = 0;
	while (head != NULL)
	{
		if (a == index)
			break;
		head = head->next;
		a++;
	}
	return (head);
}
