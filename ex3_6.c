#include <stdio.h>
#include <string.h>

void reverse(char s[]){
    int i, j;
    char temp;

    for(i=0, j=strlen(s)-1; i<j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
void itoa(int n, char s[], int min_width){
    int i = 0;
    int sign = (n<0)? -1: 1; 
    do {
        s[i++] = (char)(sign*(n%10)+'0');
        n/=10;
    } while (n != 0);
    if (sign < 0){
        s[i++] = '-';
    }
    while (i<min_width){
        s[i++]=' ';
    }
    s[i] = '\0';
    reverse(s);
}
int main(){
    int n =42;
    int min_width = 6;
    char s[20];
    itoa(n,s,min_width);
    printf("Padded Results: %s\n", s);
    return 0;
}