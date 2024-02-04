/* Exercise 1-12. Write a program that prints its input one word per line. */ 

#include <stdio.h>

#define PREV_NOT_WORD 1 /* prev char is not a word */
#define PREV_WORD 0 /* prev char is a word */

void main()
{
	int c, state;
	state = PREV_NOT_WORD;


	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == PREV_WORD)
			       	putchar('\n');
			state = PREV_NOT_WORD;
	       	}
		else
		{
			putchar(c);
			state = PREV_WORD;
		}
	}
}
