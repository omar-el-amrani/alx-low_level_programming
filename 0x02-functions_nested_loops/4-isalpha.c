#include <stdio.h>

/*function declaration*/
int _isalpha(int c);


/**
 * _isalphar - check if char alphabet
 * @c: This is longer description of C
 * Return: return 1 if it alphabet and 0 if anything else
 */
int _isalpha(int c)
{
	if ((65 <= c && 90 >= c ) || ( 97 <= c && 122 >= c))
	{
		return (1);
	}
	return (0);
}
