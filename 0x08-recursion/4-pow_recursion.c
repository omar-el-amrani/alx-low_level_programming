#include <stdio.h>
#include "main.h"
/**
  * _pow_recursion - print string
  * @x: the first var
  * @y: the second var
  * Return: return int
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
