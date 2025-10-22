#include <stdio.h>

/**
 * main - prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'q' && != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
