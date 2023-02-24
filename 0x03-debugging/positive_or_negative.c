#include "main.h"

/**
* positive_or_negative - tests function that prints if integer is pos or neg
* @n: this for variable n
* Return: void
*/

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
