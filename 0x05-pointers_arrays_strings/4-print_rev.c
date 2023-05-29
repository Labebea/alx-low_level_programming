#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 * Return: no return value
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	putchar('\n');
}
