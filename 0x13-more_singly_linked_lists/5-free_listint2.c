#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *x;
	listint_t *a;

	if (head != NULL)
	{
		a = *head;
		while ((x = a) != NULL)
		{
			a = a->next;
			free(x);
		}
		*head = NULL;
	}
}
