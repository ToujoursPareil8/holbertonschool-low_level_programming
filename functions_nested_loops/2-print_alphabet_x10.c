#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - imprime 10 fois l'alphabet en minuscule
 */
void print_alphabet_x10(void)
{
int i = 0;        /* Compte combien de fois on affiche l’alphabet */
char ch;          /* Lettre actuelle */
while (i < 10)
{
ch = 'a';     /* Commence à 'a' */
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');  /* Nouvelle ligne après chaque alphabet */
i++;
}
}
