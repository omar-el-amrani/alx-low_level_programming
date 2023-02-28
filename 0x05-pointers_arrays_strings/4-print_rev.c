#include <stdio.h>
/**
  * print_rev - print str
  *
  * @s: the first car
  *
  * Return: return void
  */

void print_rev(char *s)
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
