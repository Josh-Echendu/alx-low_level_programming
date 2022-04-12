#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
