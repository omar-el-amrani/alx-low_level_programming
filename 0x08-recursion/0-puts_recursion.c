#include <stdio.h>
#include "main.h"
/**
  * _puts_recursion- print string
  * @s: the first var
  * Return: return char
  */
void _puts_recursion(char *s)
{
	if (*(s + 0) != '\0')
		return;
	_putchar(*(s + 0));
	_puts_recursion(*(s + 1));
}
