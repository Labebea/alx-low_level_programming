#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: character to check
 * Return: 1 if c is a digit
 * return 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
