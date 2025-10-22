#include <stdio.h>
/**
 * main - Prints number of base 16 in lowercase
 *
 * Return: Always (0)
 */
int main(void)
{
int x = 0;
while (x < 10)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
