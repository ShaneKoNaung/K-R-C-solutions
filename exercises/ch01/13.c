/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.  */

#include <stdio.h>

#define MAX_LEN 30 /* max word length */
#define IN 1 /* in a word */
#define OUT 0 /* out of a word */


void main()
{
	int i,j, c, state, nword, longest_word_index;
	int word_lengths[MAX_LEN];

	nword = 0;
	state = OUT;
	longest_word_index =  0;

	for (i = 0; i < MAX_LEN; ++i)
		word_lengths[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if (state == IN)
			++nword;
		if (c == ' ' || c == '\n' || c == '\t')
		{
			word_lengths[nword] += 1;
			nword = 0;
			state = OUT;
		}

		else if (state == OUT)
		{
			state = IN;
		}
	}

	for (i = 1; i < MAX_LEN; ++i)
	{
		if (word_lengths[i] > 0)
		{
			longest_word_index = i;
		}
	}

	for (i = 1; i <= longest_word_index; ++i)
	{
		printf("%3d : ",i);
		for (j = 0; j < word_lengths[i]; ++j)
			printf("#");
		printf("\n");
	}	
}

