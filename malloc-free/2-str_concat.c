#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* str_concat - concatenates two strings into a newly allocated space
* @s1: first string
* @s2: second string
*
* Return: pointer to the concatenated string, or NULL if malloc fails
*/

char *str_concat(char *s1, char *s2)
{
    char *concat;
    size_t len1, len2;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 == "";
    }
    
    len1 = strlen(s1);
    len2 = strlen(s2);

    concat = malloc(len1 + len2 + 1);
    if (concat == NULL)
    {
        return(NULL);
    }
    strcpy(concat, s1);
    strcpy(concat, s2);

    return(concat);
}