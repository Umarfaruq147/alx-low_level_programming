#include "main.h"
/**
 * print_most_numbers - checks for a digit(0 through 9 )
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50 && a != 52)
		{
			putchar(a);
		}
	}
	putchar('\n');
}
