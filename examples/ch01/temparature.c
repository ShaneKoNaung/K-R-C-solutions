#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

void main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5./9.) * (fahr-32);
    printf("%3.f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
