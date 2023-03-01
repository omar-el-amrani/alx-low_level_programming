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
	int count,i,half;
        char str;
        
        i=0;
        count=0;
        while (*(s+count) != '\0')
        {
        	count++;
        	
        }
	half = count / 2;
		while (i < half)
	{
		printf("in while this half: %d  and this count: %d and this is I: %d and this two char1: %c ,char2: %c",half,count,i,s[i],s[count]);
		str=s[i];
		s[i] = s[count];
            s[count] = str;	
            count--;
            i++; 
           
        }
}
