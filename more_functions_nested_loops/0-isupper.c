#include "main.h"

/**
 * _isupper - Vérifie si le caractère passé est une majuscule (A-Z)
 * @c: le caractère à tester (représenté sous forme d’entier)
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
