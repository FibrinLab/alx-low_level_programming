#include <stdio.h>

/**
 * main - Prints the alphabet in lower case then in upper case
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	return (0);
}
