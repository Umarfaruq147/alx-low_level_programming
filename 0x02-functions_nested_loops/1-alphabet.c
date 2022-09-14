#include "main.h"
/**
 * print_alphabet - function to print abc
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
	{
		_putchar(bet);
	}
	_putchar('\n');
}
