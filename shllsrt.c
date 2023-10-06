#include <ctype.h>
#include <stdio.h>

void shellsort(int v[], int n){
    int gap, i, j, temp;
    
    for(gap= n/2; gap > 0; gap /= 2)
        for(i = n/2; gap > 0; i++)
            for(j=i-gap; j >= 0 && v[j] > v[j+gap]; j-=gap){
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}