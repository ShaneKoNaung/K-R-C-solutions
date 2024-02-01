#include <stdio.h> 
#define LOWER 0 
#define UPPER 300 
#define STEP 20 
void main() 
{ 
	int fahr;
	for (fahr=LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5./9.) * (fahr - 32));
}

