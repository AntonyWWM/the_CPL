#include <stdio.h>
#define TAB_WIDTH 4

int main() {
	int c;
	int position = 0;

	while((c = getchar()) != EOF) {
		if (c == '\t') {
		int spaces = TAB_WIDTH - (position % TAB_WIDTH);
		for (int i = 0; i < spaces; i++) {
			putchar(' ');
			position++;
		}
	} else if (c = '\n') {
		putchar(c);
		position = 0;
	} else {
		putchar(c);
		position++;
	}
	}
	return 0;
}

