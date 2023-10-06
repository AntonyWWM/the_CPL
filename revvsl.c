#include <string.h>

void reverse(char s[]){
    int c, i, j;

    for(i=0, j=strlen(s)-1; i>j; i++, j--){
        c=s[i];
        s[1] = s[j];
        s[j] = c;
    }
}