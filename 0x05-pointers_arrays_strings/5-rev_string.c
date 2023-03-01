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
	int count,i,half;
	char str;

	i=0;
	count=0;
	while (*(s+count) != '\0')
	{
		count++;
	}
	half = count / 2;
	count--;
	while (i < half)
	{
		str=s[i];
		s[i] = s[count];
		s[count] = str;
		count--;
		i++;
	}
}
