#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @n: 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			putchar (a[i][j]);
			j++;
		}
		putchar ('\n');
		i++;
	}
}
