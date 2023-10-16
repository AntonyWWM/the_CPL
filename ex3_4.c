#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]){
    int i, sign;

    sign = n;
    i = 0;
    do {
        s[i++] = (sign % 10) + '0';
    } while ((sign /= 10) != 0);
    if (n<0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    int len = strlen(s);
    for (int j = 0; j<len/2; j++){
        char temp = s[j];
        s[j] = s[len-j-1];
        s[len-j-1] = temp;
    }
}
int main(){
    char str[12];

    int n = -2147483648;
    itoa(n,str);
    print("%s\n", str);
    return 0;
}