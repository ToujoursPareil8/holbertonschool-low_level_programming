#include <stdio.h>
/**
 * main - Prints number of base 16 in lowercase
 *
 * Return: Always (0)
 */

int main(void)
{
int num;
for (num = 0, num <= 15, num++)
{
if (num < 10)
putchar(num + '0');
else
putchar(num - 10 + 'a');
}
putchar('\n');
return (0);
}
