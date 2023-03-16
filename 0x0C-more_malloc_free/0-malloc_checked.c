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
	if (malloc(b) == NULL)
		return (98);
	return (malloc(b));
}
