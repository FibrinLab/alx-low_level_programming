#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	return (0);
}
