#include <stdio.h>
/**
  * rev_string - print rev str
  *
  * @s: the first car
  *
  * Return: return void
  */

void rev_string(char *s)
{
	int len, count;
	char strlocal;

	len = 0;
	count = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	len--;
	while (len >= count)
	{
		strlocal = *(s + len);
		*(s + len) = *(s + count);
		*(s + count) = strlocal;
		count++;
		len--;
	}
	printf("\n");
}
