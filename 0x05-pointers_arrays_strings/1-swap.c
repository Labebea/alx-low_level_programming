#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
