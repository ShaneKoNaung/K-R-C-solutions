/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input. */

#include <stdio.h>

#define MAX_LEN 36
#define CHAR_LEN 26

void main()
{
	char c;
	int i, j, last_index;
	int char_len[MAX_LEN];

	last_index = 0;
	for (i =0; i < MAX_LEN; ++i)
		char_len[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if ( c >= 'a' && c <= 'z')
			char_len[c - 'a'] += 1;

		else if ( c >= '0' && c <= '9')
			char_len[c - '0' + CHAR_LEN] += 1; 
	}

	for (i = 0; i < CHAR_LEN; ++i)
	{
		printf("%c : ", i + 'a');
		for (j = 1; j <= char_len[i]; ++j)
			printf("#");
		printf("\n");

	}

	for (i = CHAR_LEN; i < MAX_LEN; ++i)
	{
		printf("%c : ", i - CHAR_LEN + '0');
		for (j = 1; j <= char_len[i]; ++j)
			printf("#");
		printf("\n");
	}
}


