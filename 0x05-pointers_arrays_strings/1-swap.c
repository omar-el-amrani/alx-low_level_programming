#include <stdio.h>
/**
  * swap_int - swap the value of two numbers
  *
  * @a: the first number int
  * @b: the second number int
  *
  * Return: return void
  */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
