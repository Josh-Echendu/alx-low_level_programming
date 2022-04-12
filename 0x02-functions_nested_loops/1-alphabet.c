#include <stdio.h>
/**
 * main - Entry point
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
	return;
}
