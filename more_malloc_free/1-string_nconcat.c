#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 with first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to new string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int len1, len2, total_size;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n > len2)
n = len2;

total_size = len1 + n + 1;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

strcpy(ptr, s1);
strncpy(ptr + len1, s2, n);
ptr[len1 + n] = '\0';
return (ptr);
}