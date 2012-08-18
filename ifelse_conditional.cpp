#include <stdio.h>

int main()
{
	int a, b;
	printf("Introduce A: "); scanf("%d", &a);
	printf("Introduce B: "); scanf("%d", &b);
	
	if (a>b)
		printf("A es mayor que B");
	else
		printf("B es igual o mayor que A");
	return 0;
}
