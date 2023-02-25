#include <stdio.h>
/**
  * print_line - print number from 0 to 14
  * @n: this for n variable
  * Return: void
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("_");
	printf("\n");
}
