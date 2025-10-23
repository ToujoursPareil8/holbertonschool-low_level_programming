#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - print _putchar, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
char c ='a';
while ( c <= 'z')
{
putchar (c);
c++;
}	
return (0);
}
