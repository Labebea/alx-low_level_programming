#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: number whose sign will be printed
 * Return: 1 if n is greater than zero and 0 if zero
 * and -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

