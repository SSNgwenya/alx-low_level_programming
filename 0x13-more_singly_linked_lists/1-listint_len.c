#include "lists.h"

/**
 * listint_len - returns number of elements in
 * a linked list.
 * @h: head of  list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
