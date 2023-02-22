#include <stdio.h>
#include "main.h"
/*function declaration*/
int _abs(int);


/**
 * _abs - absolute value
 * @n: This is longer description of n
 * Return: return absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	return (0);
}
