/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */
#include <stdio.h>

#define PREV_CHAR_BLANK 1
#define PREV_CHAR_NOT_BLANK 0

void main()
{
	int c, flag;

	flag = PREV_CHAR_NOT_BLANK;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ' || flag == PREV_CHAR_NOT_BLANK) 
		{
		       	putchar(c);
			flag = PREV_CHAR_NOT_BLANK;
		}
		if (c == ' ')
			flag = PREV_CHAR_BLANK;
	}
}
