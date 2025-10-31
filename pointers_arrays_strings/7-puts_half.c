#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
    int len = 0;
    int n;

    /* Find the length of the string */
    while (str[len] != '\0')
    {
        len++;
    }

    /* Determine the starting point */
    if (len % 2 == 0)
        n = len / 2;
    else
        n = (len - 1) / 2 + 1;

    /* Print from n to the end */
    while (str[n] != '\0')
    {
        _putchar(str[n]);
        n++;
    }
    _putchar('\n');
}

