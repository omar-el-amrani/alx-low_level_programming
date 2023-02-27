#include <stdio.h>
/**
  * _puts - print str
  *
  * @str: the first car
  *
  * Return: return void
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c",*str);
		str++;
	}
	printf("\n");
}
