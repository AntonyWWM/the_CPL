#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void remTW(char *line) {
	int len = strlen(line);
	while(len > 0 && (line[len -1] == ' ' || line[len - 1] == '\t' || line[len - 1] == '\n')) {
		len--;
	}
	line[len] = '\0';
}
int main() {
	char line[MAXLINE];
	while(fgets(line, sizeof(line), stdin)) {
		remTW(line);
		if (line[0] != '\0') {
			printf("%s\n", line);
		}
	}
	return 0;
}

