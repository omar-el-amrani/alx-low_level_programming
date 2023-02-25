#include "main.h"

/**
 * fizz_buzz - check the code
 *
 * Return: Always void.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - checker code
 * Return: Always return 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
