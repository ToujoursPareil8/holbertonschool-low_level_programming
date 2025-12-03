#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);

	while (s[i])
		i++;

	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, const char *src)
{
	unsigned int i = 0;

	if (src == NULL)
	{
		dest[0] = '\0';
		return (dest);
	}

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head
 * @str: string to duplicate into node
 *
 * Return: address of new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	len = _strlen(str);

	new->str = malloc(len + 1);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	_strcpy(new->str, str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}