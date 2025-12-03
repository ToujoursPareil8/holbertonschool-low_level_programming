#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head (first node) of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		/* Check if the string is NULL */
		if (current->str == NULL)
		{
			/* Format: [0] (nil) */
			printf("[0] (nil)\n");
		}
		else
		{
			/* Format: [length] string */
			printf("[%lu] %s\n", current->len, current->str);
		}

		/* Move to the next node */
		current = current->next;
		/* Increment node count */
		count++;
	}

	return (count);
}