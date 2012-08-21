#include <stdio.h>

#define WORD 1
#define SPACE 0

int main() {
	int cchar, words, state;
	
	
	state = words = 0;
	while ((cchar = getchar()) != '\n') 
		if (cchar == ' ' || cchar == '\n' || cchar == '\t') {
			state = SPACE;
			printf("\n");
		}
		
		else if (state == SPACE && cchar != ' ') {
			state = WORD;
			++words;
			putchar(cchar);
			
		}
		else {
			putchar(cchar);
		}
			
		printf("\n%d", words);

	return 0;	
	
}
