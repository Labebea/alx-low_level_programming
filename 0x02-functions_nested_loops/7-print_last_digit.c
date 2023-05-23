#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: digit
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar('0' + n);
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0' + n);
	}
	else if (n < 0)
	{
		n = (-1) * (n % 10);
		_putchar('0' + n);
		return (n);
	}
	return (0);
}
