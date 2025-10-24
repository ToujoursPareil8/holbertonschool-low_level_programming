#include "main.h"

/**
 *_isalpha - verif if a character is a ltter (maj or min)
 @c: carac to test
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c);
{
if (( c>='a' && c <= 'z') || (c>= 'A' && c <= 'Z'))
return (1);
else 
return (0);
}
