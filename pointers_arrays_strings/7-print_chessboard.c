#include "main.h"

/**
 * print_chessboard - affiche un échiquier 8x8
 * @a: tableau 2D de caractères représentant l'échiquier
 *
 * Chaque case est un caractère (par ex. 'r', 'n', 'b', 'q', 'k', 'p' ou
 * un caractère quelconque). La fonction affiche chaque ligne de 8
 * caractères puis un saut de ligne.
 */

void print_chessboard(char (*a)[8])

{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }
    
}