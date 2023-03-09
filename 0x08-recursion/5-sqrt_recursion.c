#include <stdio.h>
#include "main.h"
/**
  * _sqrt_omar - test if number has sqrt
  * @a: the first var
  * @b: the second var
  * Return: return int
  */
int _sqrt_omar(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_omar(a + 1, b));
	}

}
/**
 * _sqrt_recursion - test number with first function
 * @n: first var
 * Return: return int
 */
int _sqrt_recursion(int n)
{
	int tnm = 1;

	return (_sqrt_omar(tnm, n));
}
