#include <stdio.h>
/**
  * print_triangle- print diagonal
  * @size: this for size variable
  * Return: void
  */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			putchar(' ');
		for (j = size - i; j < size; j++)
			putchar('#');
		putchar('\n');
	}
}
