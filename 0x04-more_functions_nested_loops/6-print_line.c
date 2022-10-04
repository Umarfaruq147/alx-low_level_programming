#include "main.h"

/**
 * print_line - prints line
 * @n: param
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		putchar(95);
		i++;
	}
	putchar('\n');
}

