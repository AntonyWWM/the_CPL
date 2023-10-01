#include <stdio.h>
int main(){
	int currentChar, prevChar;
	prevChar = getchar();
	while ((currentChar = getchar()) != EOF){
		if (currentChar != ' ' || prevChar != ' '){
			putchar(prevChar);
		}
		prevChar = currentChar;
	}
	putchar(prevChar);
	return 0;
}
