#include <stdio.h>
#include <string.h>
 void reverse(char s[]){
    int i, j;
    char temp;
    for(i=0, j=strlen(s)-1; i<j; i++,j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
 }
 void itob(int n, char s[], int b){
    if (b<2 || b>36){
        printf("Base 'b' must be between 2 and 36.\n");
        return;
    }
    if (n==0){
        s[0] = '0';
        s[1] = '\0';
        return;
    }
    int i = 0;
    int sign = (n<0) ? - 1:1;
    while(n != 0){
        int digit = (n%b) * sign;
        s[i++] = (digit < 10) ? digit + '0': digit - 10 + 'A';
        n/=b;
    }
    if(sign < 0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
 }
 int main(){
    int n = 255;
    char s[100];
    itob(n,s,16);
    printf("Hexadecimal representation: %s\n", s);
    return 0;
 }