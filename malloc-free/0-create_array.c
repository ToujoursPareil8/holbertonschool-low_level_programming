#include <stdlib.h>
#include "main.h"
/**
 * create_array - créé un tableau de caractère
 * @c: initialisation du tableau
 * @size: taille du tableau à aloue
 * Return: pointeur vers le tableau NULL if dize = 0 ou si cela echoue
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
