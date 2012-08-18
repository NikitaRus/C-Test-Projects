#include <stdio.h>

#define MIN 0
#define MAX 100
#define PASO 10


int main()
{
	int cel;

	printf("Celsius \t Fahrenheit\n");
	for (cel = MIN; cel <= MAX; cel = cel + PASO)
		printf("%3d \t\t %6.1f\n", cel, (cel * 9.0 / 5) + 32);
	
	return 0;
}
