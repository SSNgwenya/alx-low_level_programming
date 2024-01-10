#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
