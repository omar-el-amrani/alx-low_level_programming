#include <stdio.h>
/**
  * _isdigit - checks if it is digit or not
  *
  * @c: the char to be checked
  *
  * Return: return 1 if it is digit and 0 if it isn't
  */

int _isdigit(int c)
{
	if (48 <= c && 57 >= c)
		return (1);
	return (0);
}
