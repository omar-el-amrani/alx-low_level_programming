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
	 int count,i;
        char str;
        
        i=0;
        count=0;
        while (*(s+count) != '\0')
        {
        	count++;
        	
        }
       count--;
        while (*(s+count) != '\0')
        {
        	str=*(s+i);
            *(s+i)=*(s+count);
            *(s+count)=str;
        	
            printf("first: %c  , second: %c",*(s+i),*(s+count));
            count--;
            i++; 
           
        }
}
