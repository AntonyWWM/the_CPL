#include <stdio.h>
int main() {
	int year;
	printf("Please enter the year: ");
	scanf("%d", &year);
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d is a leap year!!!\n", year);
	} else {
		printf("Sorry, %d is not a leap year. Try again\n", year);
	}
	return 0;
}

