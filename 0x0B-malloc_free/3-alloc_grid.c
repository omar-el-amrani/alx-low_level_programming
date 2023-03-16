#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * **alloc_grid - make array in array
  * @width: the first var
  * @height: the second var
  * Return: return array
  */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	i = 0;
	j = 0;
	ar = malloc(height * sizeof(*int));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ar[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ar);
}
