#include <stdio.h>
/**
  * print_square - print diagonal
  * @size: this for size variable
  * Return: void
  */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			putchar('#');
		putchar('\n');
	}
}
