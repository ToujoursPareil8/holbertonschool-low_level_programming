#include "main.h"

/**
 * _islower - vÃrifie si un caractÃ¨re est minuscule
 * @c: le caractere a tester (en code ASCII)
 *
 * Return: 1 si c est minuscule, 0 sinon
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
