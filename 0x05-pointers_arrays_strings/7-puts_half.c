#include <stdio.h>
#include <string.h>
/**
  * puts_half - function that print half string
  *
  * @str: string varible
  * Return: return void
  */

void puts_half(char *str)
{
	int len,half;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	half = len / 2;
	len = 0;
	while (*(str + len) != '\0')
	{
		if ( len >= half)
			printf("%c", *(str + len));
		len++;
	}
	printf("\n");
}
