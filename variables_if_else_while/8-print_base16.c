#include <stdio.h>

/**
 * main - Prints number of base 16 in lowercase
 *
 * Return: Always (0)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (num 10; num < 16; num++)
{
putchar(num - 10 + 'a');
}
putchar('\n');
return (0);
}
