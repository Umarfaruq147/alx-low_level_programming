#include "main.h"

/**
 * puts2 - prints every other cahracterof a string
 *
 * @str: char to check
 * Umarfaruq - Author
 * Return: 0 is success
 */

void puts2(char *str)
{
	int string;	
	for (string = 0; str[string] != '\0'; string++)

		if (string % 2 == 0)

			putchar(str[string]);
	putchar('\n');
}
