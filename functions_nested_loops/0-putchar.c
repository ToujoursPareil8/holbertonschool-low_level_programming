#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - print _putchar, followed by a new line
 *
 * Return always 0
 */

int main(void)
{
write(1, "_putchar\n", 9);
return (0);
}
