#include "lists.h"
#include <stdio.h>
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);

		free(head);
		head = temp;
	}
}