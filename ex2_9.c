#include <stdio.h>
int bitcount(unsigned x) {
    int count = 0;
    while (x != 0) {
        x &= (x - 1); // Remove the rightmost 1-bit
        count++;
    }
    return count;
}
