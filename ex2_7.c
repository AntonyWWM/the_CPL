#include <stdio.h>
unsigned invert(unsigned x, int p, int n){
    unsigned mask = ~(~0 << n) << (p - n + 1);
    return x^mask;
}
int main(){
    unsigned x = 0b110110;
    int p = 3;
    int n = 2;

    unsigned result = invert(x, p, n);

    printf("Original x: %08x\n");
    printf("Modified x: %08x\n");
    return 0;
}