#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1000
int main()
{
	char line[MAX_LINE_LENGTH];
	while (fgets(line, sizeof(line), stdin)) {
		if (strlen(line) > 80) {
			printf("%s", line);
		}
	}
	return 0;
}

