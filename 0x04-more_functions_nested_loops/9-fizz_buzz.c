#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 by replacing the multiple of
 * 3 byFizz and the multiple of five by Buzz
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			if (n != 100)
			{
				printf("Buzz ");
			}
			else if (n == 100)
			{
				printf("Buzz\n");
			}
		}
		else if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	return (0);
}
