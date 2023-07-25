#include <stdio.h>
#define LOWER 0
#define UPPER 150
#define STEP 10

main(){
    int celsius;
    printf(" C\tF\n");
    printf("----------\n");
    for(celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
        printf("%3.0d %6.1f\n", celsius, (9.0/5.0)*celsius+32.0);
}