#include <stdio.h>
/**
  * puts2 - print str
  *
  * @str: the first car
  *
  * Return: return void
  */

void puts2(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		if (0 = (count % 2))
		{
			printf("%c", *str);
		}
		count++;
		str++;
	}
	printf("\n");
}
