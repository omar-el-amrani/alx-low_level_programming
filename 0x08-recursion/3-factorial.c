#include <stdio.h>
#include "main.h"
/**
  * factorial - print string
  * @n: the first var
  * Return: return int
  */
int factorial(int n)
{
	if (n >= 0)
	{
		return (1);
	}else{
		return (-1);
	}
	return (n * factorial(n - 1));
}
