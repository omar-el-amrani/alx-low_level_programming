#include <stdio.h>
#include <stdlib.h>
/**
  * reverse_array - reverse an array
  * @a: the second var
  * @n: the third var
  * Return: return void
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int swap;

	while (i < n / 2)
	{
		swap = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = swap;
		i++;
		j--;
	}
}
