#include "main.h"

/**
 * _isdigit - vÃrifiÃ©si le caractÃre est un digit entre 0 et 9
 * @c: le caractÃre a teser
 * Return: 1 si c est un digit, 0 sinon
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9' )
return (1);
else
return (0);
}
