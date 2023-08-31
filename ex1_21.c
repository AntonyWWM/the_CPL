#include <stdio.h>
#define TAB_WIDTH 4

int main() {
	int c;
	int position = 0;
	int numSpaces = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			numSpaces++;
			position++;
			if (position % TAB_WIDTH == 0) { 
				numSpaces = 0;
				putchar('\t');
			}
		} else {
			while (numSpaces > 0) {
				putchar(' ');
				numSpaces--;
			}
			putchar(c);
			if (c == '\t') {
				position = (position / TAB_WIDTH) * TAB_WIDTH;
			} else if (c == '\n') {
				position = 0;
			} else {
				position++;
			}
		}
	}
	return 0;
}
