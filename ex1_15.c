#include <stdio.h>
float FahrToCel(float fahr);
int main(void)
{
	float fahr;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	
	printf("F\t C\n");
	printf("----------\n");

	fahr = lower;
	while(fahr <= upper)
	{
		printf("%3.0f %6.1f\n", fahr, FahrToCel(fahr));
	}
	return 0;
}
float FahrToCel(float fahr)
{
	return(5.0/9.0)*(fahr - 32);
}

