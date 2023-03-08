#include <stdio.h>
#include "main.h"
/**
  * _strlen_recursion - print string
  * @s: the first var
  * Return: return int
  */
int _strlen_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
