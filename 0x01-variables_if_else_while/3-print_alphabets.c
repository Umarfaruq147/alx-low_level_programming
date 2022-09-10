#include <stdio.h>
/**
 * main - print the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	for (aplphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
