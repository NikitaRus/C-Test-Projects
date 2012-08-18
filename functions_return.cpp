#include <stdio.h>

void line(char ch, int n);

int main() 
{
     line("-", 50);
     line("*", 8);
     return 0;
} 
void line(char ch, int n)
{
     int i;
     for( i = 1; i <= n; i++ )
		putchar(ch);
}
