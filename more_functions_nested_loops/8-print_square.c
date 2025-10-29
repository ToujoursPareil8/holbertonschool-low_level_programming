#include "main.h"

/**
 * print_square - dessine un carré avec le caractère '#'
 * @size: la taille du carré
 *
 * Return: Rien (void)
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)       // ligne
{
for (j = 0; j < size; j++)   // colonne
{
_putchar('#');
}
_putchar('\n');
}
}
}
