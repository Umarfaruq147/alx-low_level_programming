#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char alphabets;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (alphabets = 'a'; alphabets <= 'f';  alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
