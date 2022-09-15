#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 0 (success)
 */

int _islower(int c)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
