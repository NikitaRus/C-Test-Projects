#include <stdio.h>

#define SI 1
#define NO 0

int main() {
	int c, backzero = 0;
	
	while ((c = getchar()) != EOF)
		//~ if (c == ' ') {
			//~ if (backzero == 0) {
				//~ putchar(c);
			//~ else {
				//~ backzero = 1;
			//~ }
		//~ }
		//~ backzero = 1;
		//~ else {
			//~ putchar(c);
			//~ backzero = 0;
		//~ }
	//~ }
	
	if (c == ' ' && backzero == NO) {
		putchar(c);
		backzero = SI;
	}
	else if (c != ' ') { 
		putchar(c);
		backzero = NO;
	}
	return 0;
}
