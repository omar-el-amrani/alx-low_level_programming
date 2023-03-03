#include <stdio.h>
#include "main.h"
/**
  * print_number - encode a string using rot13
  * @n: the first var
  * Return: return void
  */
void print_number(int n)
{
	int op = n;

	if (n < 0)
	{
		_putchar('-');
		op *= -1;
	}
	if (op  <= 9)
	{
		_putchar('0' + op);
		return;
	}
	print_number(op / 10);
	print_number(op % 10);
}
