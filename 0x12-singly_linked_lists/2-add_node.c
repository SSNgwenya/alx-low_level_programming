#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at beginning of linked list
 * @head: double pointer to list_t list
 * @str: new string to add in node
 * Return: address of new element, or NULL if unsuccessful
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int len = 0;

	while (str[len])
		len++;
	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);
	x->str = strdup(str);
	x->len = len;
	x->next = (*head);
	(*head) = x;

	return (*head);
}
