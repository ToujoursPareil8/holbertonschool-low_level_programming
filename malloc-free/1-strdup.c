#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL or malloc fails
 */
char *_strdup(char*str)
{
    char *dup;

    if (str == NULL)
    {
        return(NULL);
    }
    dup = malloc(strlen(str) + 1);
    if (dup == NULL)
    {
        return(NULL);
    }
    strcpy(dup, str);
    return(dup);
}