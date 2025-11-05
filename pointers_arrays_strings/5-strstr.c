#include "main.h"
/**
 * 
 * 
 * 
 * 
 */

char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    while (*haystack != '\0')
    {
        h = haystack;
        n = needle;

        while (*h != '\0' && *n != '\0' && *h == *n)
        {
            h++;
            n++;
        }
        if (*n == '\0')
         return (haystack);
        
        haystack++;
    }
    return (0);
}