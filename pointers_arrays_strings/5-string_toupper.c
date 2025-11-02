#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *s)
{
    int i;

    // 1️⃣ Go through each character
    for (i = 0; s[i] != '\0'; i++)
    {
        // 2️⃣ If it's a lowercase letter (a–z)...
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // 3️⃣ ...turn it into uppercase by subtracting 32
        s[i] = s[i] - 32;
        }
    }

    return (s);
}

