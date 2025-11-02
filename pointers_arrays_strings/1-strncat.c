#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    // 1️⃣ Find where dest ends
    for (i = 0; dest[i] != '\0'; i++)
    ;

    // 2️⃣ Copy up to n characters from src
    for (j = 0; j < n && src[j] != '\0'; j++)
    {
    dest[i] = src[j];
    i++;
    }

    // 3️⃣ Add the null terminator to end the new string
    dest[i] = '\0';

    return (dest);
}    
