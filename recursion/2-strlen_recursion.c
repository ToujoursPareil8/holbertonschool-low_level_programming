#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string to measure
 *
 * Description:
 * Adds 1 for each character until reaching '\0'.
 * Uses recursion only, no loops.
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
    if ( *s == '\0')
    {
       return(0);
    }
    else
    {
        return (1 + _strlen_recursion (s + 1));
    }
}