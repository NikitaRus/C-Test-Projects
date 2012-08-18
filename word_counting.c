#include <stdio.h>

#define WORD 1
#define SPACE 0

int main() {
	int cchar, words, state;
	
	
	state = words = 0;
	while ((cchar = getchar()) != EOF) {
		if (cchar == ' ' || cchar == '\n' || cchar == '\t') 
			state = SPACE;
		else if (state == SPACE && cchar != ' ') {
			state = WORD;
			++words;
			
		}	
	}
	printf("%d", words);		
	

	return 0;	
}
