#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabts++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
