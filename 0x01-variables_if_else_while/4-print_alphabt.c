#include <stdio.h>
/**
 * main - print all alphabet in lowecase, followed by a new line
 * print all the letters except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}
	putcahr('\n');
	return (0);
}
