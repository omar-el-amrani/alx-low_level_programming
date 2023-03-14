#include <stdio.h>
#include <stdlib.h>
/**
  * *create_array - test if number has sqrt
  * @size: the first var
  * @c: the second var
  * Return: return array
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;
	s = malloc(size * sizeof(char));
	while (i < size)
	{
		s[i] = c;
	}
	return (s);
}
