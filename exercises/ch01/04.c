/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

void main()
{
	float celsius, fahr;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("Celsius\tFahrenheit\n");
	while (celsius <= upper)
	{
		fahr = (celsius * (9./5.)) + 32.0;
		printf("%6.0f\t%3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
