#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolutes value of an integer
 * @n: integer
 * Return: 0.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return ((-1) * n);
	}
	return (0);
}
