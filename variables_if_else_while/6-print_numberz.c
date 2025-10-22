#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');  // print digit as character
digit++;
}
putchar('\n');  // print newline
return (0);
}
