#include "lists_h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head (first node) of the list.
 *
 * This function iterates through the list, incrementing a counter
 * for each node found until the current pointer becomes NULL.
 *
 * Return: The number of elements (nodes) in the list.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        count ++;
        current = current->next;
    }
    return(count);
}