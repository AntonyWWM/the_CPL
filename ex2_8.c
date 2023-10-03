#include <stdio.h>

unsigned rightrot(unsigned x, int n){
    int num_bits = sizeof(unsigned) * 8;
    n = n % num_bits;
    unsigned right_n_bits = x & ((1 << n) - 1);
    return (x >> n) | (right_n_bits << (num_bits - n));
}
int main(){
    unsigned x = 0b110110;
    int n = 3;
    unsigned result = rightrot(x,n);
    printf( "Original x: %08x\n");
    printf("Modified x: %08x\n");
    return 0;
}