#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 0 (success)
 */

int _islower(int c)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
