#include <stdio.h>

/**
 * main - prints some letters in lower case
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			break;
		}
		else
		{
			putchar(c);
		}
	}
	return (0);
}
