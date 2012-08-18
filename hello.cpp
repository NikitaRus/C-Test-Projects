#include <stdio.h>

int main()
{
	int a, b, c; printf("Haremos la suma de dos numeros");
	printf("\nIntroduce el primer numero: "); scanf("%d", &a);
	printf("\nIntroduce el segundo numero: "); scanf("%d", &b);
	c = a + b;
	printf("\nEl numero %d mas %d es igual a %d", a, b, c);
	return 0;
}
