#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - reserve memory
 * @nmemb: the first var
 * @size: the second var
 * return: return void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int t;
	char *str;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = nmemb * size;
	str = (char *)malloc(t);
	if (str != NULL)
	{
		for (i = 0; i < t; i++)
			str[i] = 0;
		return (str);
	}
	return (NULL);
}
