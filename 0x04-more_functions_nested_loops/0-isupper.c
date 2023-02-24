#include <stdio.h>
/**
  * _isupper - checks for positive or negative numbers
  *
  * @c: the char to be checked
  *
  * Return: void
  */

int _isupper(int c)
{
	if (65 <= c && 90 >= c)
		return (1);
	if (97 <= c && 122 >= c)
		return (0);
}
