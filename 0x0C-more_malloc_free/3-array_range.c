#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - reserve memory
 * @min: the first var
 * @max: the second var
 * return: return int
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int i, t, count;

	count = 0;
	if (min > max)
		return (NULL);
	t = (max - min) + 1;
	array = malloc(t * sizeof(int));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[count] = i;
			count++;
		}
		return (array);
	}
	return (NULL);
}
