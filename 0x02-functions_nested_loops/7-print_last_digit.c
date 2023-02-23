#include <stdio.h>
#include "main.h"
/*function declaration*/
int print_last_digit(int);


/**
 * print_last_digit - get last digit
 * @n: This is longer description of n
 * Return: return last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -1 * n;
	_putchar('0' + n);
	return (n);
}
