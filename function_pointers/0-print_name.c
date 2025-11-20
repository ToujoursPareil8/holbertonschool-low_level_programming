#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - prints a name using function pointer
* @name: name to print
* @f: pointer to a function that takes a char* and returns nothing
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}