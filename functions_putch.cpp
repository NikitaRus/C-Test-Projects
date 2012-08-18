#include <stdio.h>

void line();

int main()
{
	line();
	printf("\nAsdf\n");
	line();
	return 0;
}

void line()
{
	int i;
	for(i = 1;i < 80; i++)
	printf("*");
}
