#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int j =0;

	while (j++ <= 9)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
			_putchar(alphabets);

		_putchar('\n');
	}
}
