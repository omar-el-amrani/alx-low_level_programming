#include <stdio.h>
/**
  * print_array - print str
  *
  * @a: the first var
  * @n: the second var
  * Return: return void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d,", *(a + i));
		}
		else if (i == (n - 1))
		{
			printf(" %d", *(a + i));
		}
		else
		{
			printf(" %d,", *(a + i));
		}
	}
	printf("\n");
}
