#include <stdio.h>

/*function declaration*/
int _islower(int c);


/**
 * _islower - check if char lowercase or uppercase
 * @c: This is longer description of C
 * Return: return 1 if it lowercase and 0 if it uppercase
 */
int _islower(int c)
{
	if (96 < c && 123 > c )
	{
		return(1);
	}
	return(0);
}
