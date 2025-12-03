#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * This function allocates a new node, duplicates the input string (and
 * calculates its length), sets the new node's next pointer to the current
 * head, and finally updates the head pointer to the new node.
 *
 * Return: The address of the new element (node), or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *dup_str;
    unsigned int len = 0;

    /* 1. Calculate string length */
    if (str == NULL)
        return (NULL); /* String must not be NULL for duplication/length */

    while (str[len])
        len++;

    /* 2. Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* 3. Duplicate the string using strdup */
    dup_str = strdup(str);
    if (dup_str == NULL)
    {
        /* Clean up node memory if string duplication fails */
        free(new_node);
        return (NULL);
    }

    /* 4. Populate the new node */
    new_node->str = dup_str;
    new_node->len = len;

    /* 5. Link the new node to the current head (insert at beginning) */
    new_node->next = *head;

    /* 6. Update the list head to point to the new node */
    *head = new_node;

    /* 7. Return the address of the new node */
    return (new_node);
}