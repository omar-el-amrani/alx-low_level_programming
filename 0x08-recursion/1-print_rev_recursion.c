#include <stdio.h>
#include "main.h"
/**
  * _print_rev_recursion - print string
  * @s: the first var
  * Return: return void
  */
void _print_rev_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*(s + 0));
}
