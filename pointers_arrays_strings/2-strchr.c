#include "main.h"
/**
 * strchr - locates a character in a string
 * @s: string to be searched
 */

char *strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (s);
        }
        s++;
    }
    return (NULL);
}
