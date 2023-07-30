#include <stdio.h>
#define MAX_WORD_LENGTH 20
int main(){
	int c, length, i, j;
	int word_lengths[MAX_WORD_LENGTH + 1];

	for (i = 0; i <= MAX_WORD_LENGTH; ++i)
		word_lengths[i] = 0;
	
	length = 0;
	while ((c = getchar()) != EOF){
		if ( c == ' ' || c == '\n' || c == '\t'){
			if (length > 0 && length <= MAX_WORD_LENGTH)
				++word_lengths[length];
			length = 0;
		}else {
			++length;
		}
	}
	int max_count = 0;
	for(i = 1; i <= MAX_WORD_LENGTH; ++i){
		if (word_lengths[i] > max_count){
			max_count = word_lengths[i];
		}
	}
	printf("\n Vertical Histogram:\n");
	for (i = max_count; i > 0; --i){
		for ( j = 1; j <= MAX_WORD_LENGTH; ++j){
			if (word_lengths[j] >= i){
				printf(" *");
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
	//the x axis word with word lengths
	for (i = 1; i <= MAX_WORD_LENGTH; ++i){
		printf("----");
	}
	printf("\n");
	for (i = 1; i <= MAX_WORD_LENGTH; ++i){
		printf(" %2d", i);
	}
	printf("\n");
	return 0;
}

