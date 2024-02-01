/* Modify the temperature conversion program to print a heading above the table. */
#include <stdio.h>

void main()
{
	float fahr, celsius;
	float upper, lower, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahrenheit Celsius\n");
	while (fahr <= upper)
	{
		celsius = (5./9.) * (fahr - 32.0);
		printf("%3.f\t%10.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

