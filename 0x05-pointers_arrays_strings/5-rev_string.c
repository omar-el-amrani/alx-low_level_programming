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
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != '\0')
	{
		printf("%c", *s);
		s--;
	}
	printf("\n");
}
