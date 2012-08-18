
/* 27_tri.c */ 
#include <stdio.h>
int main()
{
     int hor, ver;
     for (hor = 1; hor <= 5; hor++)
		{
		for (ver = 1; ver <= 5; ver++)
			printf("%4d", ver);
			printf("\n");
		}
	return 0;
}
