#include <stdio.h>
#define MAX_CHAR 128
int main()
{
	int c;
	int char_counts[MAX_CHAR] = {0};
	while ((c = getchar()) != EOF){
		if (c >=0 && c < MAX_CHAR){
			++char_counts[c];
		}
	}
	printf("Histogram of Character Frequencies:\n");
	for (int i = 0; i < MAX_CHAR; ++i){
		if (char_counts[i] > 0){
			if (i >= 32 && i <= 126){
				printf("'%c' (%d): ", i, char_counts[i]);
			}else {
				printf("'%03o' (%d): ", i, char_counts[i]);
			}
		for (int j = 0; j < char_counts[i]; ++j){
			printf("*");
		}
		printf("\n");
		}
	}
	return 0;
}

