#include <stdio.h>

int main()
{
	int num;
	printf("Introduce un numero del uno al tres: "); scanf("%d", &num);
	switch(num)
	{
	case 1: printf("Uno"); break;
	case 2: printf("Dos"); break;
	case 3: printf("Tres"); break;
	default: printf("Fuera de rango");
	}

	return 0;
}
