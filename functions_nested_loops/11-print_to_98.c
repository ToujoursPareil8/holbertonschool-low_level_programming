#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar('0' + n % 10);
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
print_number(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
print_number(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
