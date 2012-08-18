#include <stdio.h>

int main()
{
	int i = 1;
	
	abc:
		printf("Asdf");
		i ++;
		if (i <= 10)
	goto abc;
	return 0;
}
