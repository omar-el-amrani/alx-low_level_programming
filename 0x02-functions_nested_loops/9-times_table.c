#include <stdio.h>
#include "main.h"
/*function declaration*/
void times_table(void);


/**
 * times_table - print 9 time table
 * Return: return void
 */
void times_table(void)
{
	int i=0;
	int j=0;
	while (23 >= i)
	{
		while (59 >= j)
		{
			printf("%02d:%02d\n",i,j);
			j++;
		}
		j=0;
		i++;
	}
}
