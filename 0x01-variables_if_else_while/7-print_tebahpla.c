#include <stdio.h>
/**
 * main - prints the alphabet in lowercase in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
