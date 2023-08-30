#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void reverse(char *s) {
	int length = strlen(s);
	for(int i = 0; i < length / 2; i++) {
		char temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
int main() {
	char line[MAXLINE];
	while(fgets(line, sizeof(line), stdin)) {
		reverse(line);
		printf("%s", line);
	}
	return 0;
}

