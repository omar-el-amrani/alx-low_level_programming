#include <stdio.h>
/**
  * _isupper - checks for positive or negative numbers
  *
  * @c: the char to be checked
  *
  * Return: return 1 if it upper and 0 if it lower
  */

int _isupper(int c)
{
	if (65 <= c && 90 >= c)
		return (1);
	return (0);
}
