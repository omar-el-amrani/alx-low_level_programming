#include <stdio.h>

/*function declaration*/
int print_sign(int n);


/**
 * print_sign - check if n is positif or negatif or zero
 * @n: This is longer description of n
 * Return: return 1 if it positif and 0 if zero and -1 if negatif
 */
int print_sign(int n)
{
	if ( 0 < n )
	{
		_putchar('+');
		return (1);
	}
	else if ( 0 > n )
	{
		_putchar('-');
		return (-1);
	
	}
	_putchar('0');
	return (0);
}
