#include <stdio.h>
#include "main.h"
/**
  * print_chessboard - print array string
  * @a: the first var
  * Return: return void
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (*(*(a + j) + i) != '\0')
		{
			_putchar(*(*(a + i) + j));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
