#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: no value
 */
void rev_string(char *s)
{
	int i;
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		return(s[i]);
	}
}
