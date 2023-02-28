#include <stdio.h>
/**
  * puts2 - print str
  *
  * @s: the first car
  *
  * Return: return void
  */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		if (0 = count % 2)
			printf("%c", *s);
		count++;
		s++;
	}
	printf("\n");
}
