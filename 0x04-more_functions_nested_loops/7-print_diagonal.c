#include <stdio.h>
/**
  * print_diagonal - print diagonal
  * @n: this for n variable
  * Return: void
  */
void print_diagonal(int n)
{
	int i;
	int j;
	
	if (0 >= n)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		printf("\\\n");
	}
}
