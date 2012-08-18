#include <stdio.h>
int main()
{
	int parcial1, parcial2, final;
	char nombre[10];
	
	printf("Tu nombre: "); scanf("%s", nombre);
	printf("Introduce tus notas: "); scanf("%d%d%d", &parcial1, &parcial2, &final);
	
	float total = parcial1 + parcial2 + final;
	float promedio = total / 3;
	
	printf("%s, tu promedio es %.2f", nombre, promedio);
	return 0;
}
