#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    // 1️⃣ Copy up to n characters from src
    for (i = 0; i < n && src[i] != '\0'; i++)
    dest[i] = src[i];

    // 2️⃣ If src is shorter, fill the rest with '\0'
    for (; i < n; i++)
    dest[i] = '\0';

    return (dest);
}
