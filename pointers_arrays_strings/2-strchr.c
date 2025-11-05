#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 */

char *_strchr(char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
        {
            return (char *)s;
        }
        s++;
    }
    if (c == '\0')
    {
        return (char *)s;
    }
    return (0);
}