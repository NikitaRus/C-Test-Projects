#include <stdio.h>

void abs(int n);

int main() {
	int res;
	printf("%d", abs(-35));
	
	res = abs(-34);
	
	printf("%d", res);
	return 0;
} 

void abs(int n) {
     if (n < 0)
     n = n * -1;
     return n;
}
