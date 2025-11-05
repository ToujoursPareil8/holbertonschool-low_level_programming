#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: prefix to search for
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *a;

    for(; *s; s++)
    {
        for (a=accept; *a; a++)
        {
            if (*s == *a)
            {
            count++;
            break;
            }
        }
    if ( *a == '\0' )
    break;
    }
    return (count);
}