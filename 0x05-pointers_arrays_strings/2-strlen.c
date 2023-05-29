#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to be printed
 * Return: the string
 */
int _strlen(char *s)
{
	int l = 0;

	while ( *s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
