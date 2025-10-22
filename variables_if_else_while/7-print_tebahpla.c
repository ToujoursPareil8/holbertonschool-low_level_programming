#include <stdio.h>
/**
 * main - Prints out the alphabet in lower case and reverse order
 *
 * Return: Always (0)
 */

int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
