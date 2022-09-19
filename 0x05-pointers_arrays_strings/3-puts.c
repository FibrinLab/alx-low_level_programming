#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int lenght;

	while(str[lenght])
	{
		_putchar(str[lenght]);
		lenght++;
	}
	_putchar('\n');
}
