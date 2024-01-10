#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at end of linked list
 * @head: double pointer to list_t list
 * @str: string to put in new node
 * Return: address of new element, or NULL if unsuccessful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *x = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);
	a->str = strdup(str);
	a->len = len;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (x->next)
		x = x->next;
	x->next = a;
	return (a);
}
