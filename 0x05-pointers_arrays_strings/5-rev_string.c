#include <stdio.h>
/**
  * rev_string - print rev str
  *
  * @s: the first car
  *
  * Return: return void
  */

void rev_string(char *s)
{
	int count;

	count=0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	char Strlocal[count];
	s--;
	count=0;
	while (*s != '\0')
	{
		Strlocal[count]=*s;
		count++;
		s--; 
	}
	count=0;
	while (*s != '\0')
	{
		*s=Strlocal[count];
		count++;
		s++; 
	}
	*s=Strlocal;
}
