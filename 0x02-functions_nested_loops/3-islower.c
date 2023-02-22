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
	if(96<c && c>123)
	{
		return 1;
	}
	else
	{
                return 0;
        }
}
