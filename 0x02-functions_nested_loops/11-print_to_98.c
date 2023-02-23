#include <stdio.h>
#include "main.h"
/*function declaration*/
void print_to_98(int n);

/**
 * jack_bauer - print hours and minutes
 * Return: return void
 * @n: num initial
 */
void print_to_98(int n)
{
	int numIns = n;

	while (numIns != 98)
	{
		if (numIns < 98)
		{
			printf("%d, ", numIns);
			numIns++;
		}
		else if (numIns > 98)
		{
			printf("%d, ", numIns);
			numIns--;
		}
	}
	printf("%d\n", numIns);
}
