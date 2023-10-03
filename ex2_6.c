#include <stdio.h>
 unsigned setbits(unsigned x, int p, int n, unsigned y){
    unsigned mask = ~(~0 << n) << (p - n + 1);
    x = x & ~mask;
    unsigned y_bits = (y & ~(~0 << n)) << (p - n + 1);
    return x | y_bits;
 }
int main(){
    unsigned x = 0b110110;
    unsigned y = 0b101;
    int p = 5;
    int n = 3;
    unsigned result = setbits(x, p, n, y);
    printf("Original x: %08x\n");
    printf("Modified x: %09x\n");
    return 0;
}