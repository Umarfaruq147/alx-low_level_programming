#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a line
 * Return: Always 0
 */

void print_alphabet(void)
{
	char bet;
	for (bet = 'a'; bet <= 'z'; bet++)
		_putchar(bet);

	_putchar('\n');
	
	return (0);
}
