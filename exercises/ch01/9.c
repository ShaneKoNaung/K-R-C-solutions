/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. */

#include <stdio.h>

void main()
{
	int c, flag;

	flag = 0; /* if prev char is blank, flag is 1 */

	while ((c = getchar()) != EOF)
	{
		if (c != ' ' || flag == 0)
		{
			putchar(c);
			flag = 0;
		}
		if (c == ' ')
			flag = 1;
	}
}
