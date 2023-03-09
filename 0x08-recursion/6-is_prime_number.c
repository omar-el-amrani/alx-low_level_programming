#include <stdio.h>
#include "main.h"
/**
  * _isprime_omar - test if number is prime
  * @a: the first var
  * @b: the second var
  * Return: return int
  */
int _isprime_omar(int a, int b)
{
	if (b == a && b != 1 && b != -1)
	{
		return (1);
	}
	else if (b % a == 0 || b == 1 || b == -1)
	{
		return (0);
	}
	else if ( a < b)
	{
		return (_isprime_omar(a+1, b));
	}
}
/**
 * is_prime_number - test if number is prime with function _isprime_omar
 * @n: first var
 * Return: return int
 */
int is_prime_number(int n)
{
	int tnm = 2;

	return (_isprime_omar(tnm, n));
}
