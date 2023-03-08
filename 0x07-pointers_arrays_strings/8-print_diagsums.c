#include <stdio.h>
/**
  * print_diagsums - print diagsoms
  * @a: the first var
  * @size: the second var
  * Return: return void
  */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	j = 0;
	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 += a[j];
		j += (size + 1);
		i++;
	}
	i--;
	j = 0;
	while (i >= 0)
	{
		j += (size - 1);
		sum2 += a[j];
		i--;
	}
	printf("%d, %d\n", sum1, sum2);
}
