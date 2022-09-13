#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int j;

	while (j++ <= 10)
	{
		for (alphabets = 'a'; alphabet <= 'z'; alphabets++)
			_putchar(alphabets);

		_putchar('\n');
	}
}
