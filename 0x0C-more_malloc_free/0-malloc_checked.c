#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *malloc_checked - copy str to str
  * @b: the first var
  * Return: return void pointer
  */
void *malloc_checked(unsigned int b)
{

	void *s = NULL;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
