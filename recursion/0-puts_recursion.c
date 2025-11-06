#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to print
 *
 * Description:
 * If the current character is not the end of the string,
 * print it and call the function again with the next character.
 * When we reach the end ('\0'), print a newline and stop.
 */

 void _puts_recursion(char *s)
{
    if ( *s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);

    _puts_recursion(s +1);
}